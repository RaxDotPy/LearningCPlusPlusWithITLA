#include <iostream>
#include <vector>
#include <numeric>
#include <random>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de tickets a jugar: ";
    if (!(cin >> n) || n <= 0) {
        cerr << "Error: La cantidad de tickets debe ser un entero positivo.\n";
        return 1;
    }

    const int COSTO_POR_TICKET = 25;
    int costo_total = n * COSTO_POR_TICKET;

    // Inicialización del generador de números aleatorios
    random_device rd;
    mt19937 gen(rd());
    vector<int> pool;

    for (int i = 0; i < n; ++i) {
        // Si el pool está vacío (múltiplo de 8 tickets), se regeneran los 80 números
        if (pool.empty()) {
            pool.resize(80);
            iota(pool.begin(), pool.end(), 1); // Llena del 1 al 80
            shuffle(pool.begin(), pool.end(), gen); // Mezcla aleatoriamente
        }

        vector<int> ticket;
        // Extrae 10 números únicos del pool actual
        for (int j = 0; j < 10; ++j) {
            ticket.push_back(pool.back());
            pool.pop_back();
        }

        // Ordenar el ticket para facilitar la lectura
        sort(ticket.begin(), ticket.end());

        // Imprimir el ticket
        cout << "Ticket " << (i + 1) << ":\t";
        for (int num : ticket) {
            // Formateo para alinear los números de un solo dígito
            if (num < 10) cout << "0";
            cout << num << " ";
        }
        cout << "\n";
    }

    cout << "-------------------------------------------\n";
    cout << "Total de tickets: " << n << "\n";
    cout << "Costo total: " << costo_total << " pesos\n";

    return 0;
}
