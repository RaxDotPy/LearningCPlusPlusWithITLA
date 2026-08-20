(function () {
  const shellHistory = document.getElementById('history');
  const promptEl = document.getElementById('prompt');
  const inputEl = document.getElementById('commandInput');
  const treeEl = document.getElementById('tree');
  const sourceDisplay = document.getElementById('sourceDisplay');
  const outputDisplay = document.getElementById('outputDisplay');

  const sampleSources = {
    '/src_cpp/Fundamentos de Programacion ITLA/main.cpp': `#include <iostream>\n\nint main() {\n    std::cout << "Bienvenido a mi portafolio interactivo de ITLA." << std::endl;\n    return 0;\n}`,
    '/src_cpp/ejercicios con funciones/ejercicio 1.cpp': `#include <iostream>\n\nint sumar(int a, int b) {\n    return a + b;\n}\n\nint main() {\n    std::cout << "Suma de 8 + 12 = 20" << std::endl;\n    return 0;\n}`,
    '/src_cpp/ejercicios con struct/ejercicio 1.cpp': `#include <iostream>\n\nstruct Estudiante {\n    std::string nombre;\n    int edad;\n};\n\nint main() {\n    Estudiante jose = {"Jose", 20};\n    std::cout << "Nombre: Jose, Edad: 20" << std::endl;\n    return 0;\n}`,
  };

  const state = {
    cwd: '/src_cpp',
    filesystem: { type: 'dir', children: {} },
    manifest: [],
    currentFile: null,
    terminal: null,
  };

  function normalizePath(path) {
    if (!path || path === '.') {
      return state.cwd;
    }

    const raw = path.trim();
    if (!raw) {
      return state.cwd;
    }

    const absolute = raw.startsWith('/') ? raw : `${state.cwd === '/' ? '' : state.cwd}/${raw}`;
    const parts = absolute.split('/').filter(Boolean);
    const normalized = [];

    for (const part of parts) {
      if (part === '.' || part === '') {
        continue;
      }
      if (part === '..') {
        normalized.pop();
      } else {
        normalized.push(part);
      }
    }

    return '/' + normalized.join('/');
  }

  function ensurePath(path) {
    const segments = path.split('/').filter(Boolean);
    let current = state.filesystem;
    for (const segment of segments) {
      if (!current.children[segment]) {
        current.children[segment] = { type: 'dir', children: {} };
      }
      current = current.children[segment];
    }
    return current;
  }

  function buildVirtualFileSystem(entries) {
    state.filesystem = { type: 'dir', children: {} };
    const root = state.filesystem;
    const projectRoot = { type: 'dir', children: {} };
    root.children.src_cpp = projectRoot;

    for (const entry of entries) {
      const sourcePath = entry.source || entry.sourcePath || '';
      const displayPath = entry.displayPath || sourcePath.replace(/^src_cpp\//, '').replace(/^\//, '');

      if (!displayPath) {
        continue;
      }

      const segments = displayPath.split('/').filter(Boolean);
      const fileName = segments.pop();
      let current = projectRoot;

      for (const segment of segments) {
        if (!current.children[segment]) {
          current.children[segment] = { type: 'dir', children: {} };
        }
        current = current.children[segment];
      }

      current.children[fileName] = {
        type: 'file',
        outputPath: entry.outputUrl || entry.output || '',
        sourcePath,
        displayPath,
      };
    }

    state.cwd = '/src_cpp';
  }

  function getNode(path) {
    const targetPath = normalizePath(path);
    const segments = targetPath.split('/').filter(Boolean);
    let current = state.filesystem;

    for (const segment of segments) {
      if (!current.children || !current.children[segment]) {
        return null;
      }
      current = current.children[segment];
    }

    return current;
  }

  function listDirectory(path) {
    const node = getNode(path);
    if (!node || node.type !== 'dir') {
      return null;
    }
    return Object.entries(node.children).sort(([a], [b]) => a.localeCompare(b));
  }

  function setPrompt() {
    promptEl.textContent = `guest@itla:${state.cwd}$`;
  }

  function appendHistory(text, className = 'line') {
    if (state.terminal) {
      state.terminal.writeln(text);
      return;
    }

    const line = document.createElement('div');
    line.className = className;
    line.textContent = text;
    shellHistory.appendChild(line);
    shellHistory.scrollTop = shellHistory.scrollHeight;
  }

  function writeOutput(text) {
    outputDisplay.textContent = text;
  }

  function clearExecutionView() {
    if (state.terminal) {
      state.terminal.clear();
    }
    outputDisplay.textContent = '';
  }

  function getSourceUrl(sourcePath) {
    const normalizedSourcePath = (sourcePath || '')
      .replace(/^\/?src_cpp\/?/, '')
      .replace(/^\//, '');
    return encodeURI(`/src_cpp/${normalizedSourcePath}`);
  }

  function showSource(sourcePath) {
    const sourceUrl = getSourceUrl(sourcePath);
    return fetch(sourceUrl)
      .then((response) => {
        if (!response.ok) {
          throw new Error(`Unable to load source: ${response.status}`);
        }
        return response.text();
      })
      .then((source) => {
        sourceDisplay.textContent = source;
      })
      .catch(() => {
        const fallback = sampleSources[sourcePath] || `// Source preview unavailable for ${sourcePath}.`;
        sourceDisplay.textContent = fallback;
      });
  }

  function renderTree() {
    treeEl.innerHTML = '';
    const currentNode = getNode(state.cwd);
    if (!currentNode || currentNode.type !== 'dir') {
      return;
    }

    const renderChildren = (node, depth = 0, parentPath = '') => {
      const entries = Object.entries(node.children || {}).sort(([a], [b]) => a.localeCompare(b));
      entries.forEach(([name, child]) => {
        const childPath = parentPath ? `${parentPath}/${name}` : name;
        const link = document.createElement('a');
        link.href = '#';
        link.className = child.type === 'dir' ? 'tree-entry' : 'tree-file';
        link.textContent = child.type === 'dir' ? `[DIR] ${name}` : name;
        link.style.paddingLeft = `${12 + depth * 16}px`;
        link.addEventListener('click', (event) => {
          event.preventDefault();
          if (child.type === 'dir') {
            runCommand(`cd ${childPath}`);
          } else {
            runCommand(`open ${childPath}`);
          }
        });
        treeEl.appendChild(link);

        if (child.type === 'dir') {
          renderChildren(child, depth + 1, childPath);
        }
      });
    };

    renderChildren(currentNode, 0, state.cwd);
  }

  function loadManifest() {
    return fetch('wasm/manifest.json')
      .then((response) => response.json())
      .then((manifest) => {
        state.manifest = Array.isArray(manifest.files) ? manifest.files : [];
        buildVirtualFileSystem(state.manifest);
      })
      .catch(() => {
        state.manifest = [];
        buildVirtualFileSystem([]);
      });
  }

  function createTerminal() {
    if (!window.Terminal || !shellHistory) {
      return;
    }

    const term = new window.Terminal({
      cursorBlink: true,
      convertEol: true,
      theme: { foreground: '#33ff00', background: '#000000' },
      fontFamily: 'VT323, monospace',
      fontSize: 16,
      lineHeight: 1.1,
    });

    term.open(shellHistory);
    term.focus();
    state.terminal = term;
    term.write('Retro ITLA terminal initialized.\r\n');
  }

  function formatTerminalText(text) {
    return (text || '').replace(/\r\n/g, '\n').replace(/\n/g, '\r\n');
  }

  function runProgram(fileName) {
    const resolvedPath = normalizePath(fileName.startsWith('/') ? fileName : `${state.cwd}/${fileName}`);
    const node = getNode(resolvedPath);
    if (!node || node.type !== 'file') {
      appendHistory(`run: file not found: ${fileName}`);
      return;
    }

    state.currentFile = resolvedPath;
    clearExecutionView();
    if (state.terminal) {
      state.terminal.write('Compiling...\r\n');
    }
    writeOutput('Compiling...\n');
    appendHistory(`Compiling ${node.displayPath || node.sourcePath || resolvedPath}`);

    showSource(node.sourcePath || resolvedPath)
      .then(() => {
        const sourceText = sourceDisplay.textContent || '';
        return fetch('/compile_and_run', {
          method: 'POST',
          headers: { 'Content-Type': 'application/json' },
          body: JSON.stringify({ code: sourceText }),
        });
      })
      .then((response) => response.json())
      .then((payload) => {
        if (!payload.success) {
          const message = payload.stderr || payload.error || 'Compilation failed.';
          if (state.terminal) {
            state.terminal.write(`${formatTerminalText(message)}\r\n`);
          }
          writeOutput(message);
          appendHistory(`Execution error: ${message}`);
          return;
        }

        const output = [payload.stdout, payload.stderr].filter(Boolean).join('');
        const formattedOutput = formatTerminalText(output || '(program produced no output)');
        if (state.terminal) {
          state.terminal.write(`${formattedOutput}\r\n`);
        }
        writeOutput(formattedOutput);
        appendHistory('Execution complete.');
      })
      .catch((error) => {
        appendHistory(`Execution error: ${error.message}`);
        writeOutput(`Execution unavailable. ${error.message}\n`);
      });
  }

  function runCommand(raw) {
    const command = raw.trim();
    if (!command) {
      return;
    }

    const promptText = `${promptEl.textContent || 'guest@itla:/wasm$'} ${command}`;
    appendHistory(promptText, 'line command');

    const [base, ...args] = command.split(/\s+/).filter(Boolean);
    switch (base.toLowerCase()) {
      case 'help':
        appendHistory('Commands: ls, cd <dir>, open <file>, run [file], ./[program], clear, help');
        break;
      case 'ls': {
        const list = listDirectory(state.cwd);
        if (!list) {
          appendHistory('No such directory.');
          break;
        }
        list.forEach(([name, node]) => {
          appendHistory(node.type === 'dir' ? `[DIR] ${name}` : name);
        });
        break;
      }
      case 'cd': {
        const target = args.join(' ') || '/src_cpp';
        const nextPath = normalizePath(target);
        const node = getNode(nextPath);
        if (!node || node.type !== 'dir') {
          appendHistory(`cd: no such directory: ${target}`);
          break;
        }
        state.cwd = nextPath;
        setPrompt();
        renderTree();
        appendHistory(`Entered ${state.cwd}`);
        break;
      }
      case 'open': {
        const target = args.join(' ');
        if (!target) {
          appendHistory('Usage: open <file>');
          break;
        }
        const resolvedPath = normalizePath(target.startsWith('/') ? target : `${state.cwd}/${target}`);
        const node = getNode(resolvedPath);
        if (!node || node.type !== 'file') {
          appendHistory(`open: file not found: ${target}`);
          break;
        }
        state.currentFile = resolvedPath;
        clearExecutionView();
        showSource(node.sourcePath || resolvedPath);
        writeOutput(`Selected ${node.outputPath || resolvedPath}\n`);
        appendHistory(`Opened ${target}`);
        break;
      }
      case 'run': {
        const target = args.join(' ') || (state.currentFile ? state.currentFile : '');
        if (!target) {
          appendHistory('Usage: run <file>');
          break;
        }
        runProgram(target);
        break;
      }
      case 'clear':
        if (state.terminal) {
          state.terminal.clear();
        } else {
          shellHistory.innerHTML = '';
        }
        break;
      default:
        if (base.startsWith('./') || base.startsWith('.\\')) {
          runProgram(base);
        } else {
          appendHistory(`Command not found: ${base}`);
        }
    }

    inputEl.value = '';
  }

  inputEl.addEventListener('keydown', (event) => {
    if (event.key === 'Enter') {
      event.preventDefault();
      runCommand(inputEl.value);
    }
  });

  function boot() {
    createTerminal();
    setPrompt();
    loadManifest().then(() => {
      renderTree();
      appendHistory('System booting...');
      appendHistory('Retro ITLA portfolio initialized. Type help for instructions.');
      writeOutput('Welcome to the ITLA retro showcase.\nUse the terminal to explore compiled programs.\n');
    });
    inputEl.focus();
  }

  boot();
})();
