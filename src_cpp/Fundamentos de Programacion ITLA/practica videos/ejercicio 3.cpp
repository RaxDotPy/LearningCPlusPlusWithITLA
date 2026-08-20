#include <iostream>
#include <fstream>
#include <string.h>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct InfoFichero {
	char Nombre[50];
	int Bytes;
	float KB;
	float MB;
	float GB;
};

int main() {
	InfoFichero DatosFichero;
	
	strcpy(DatosFichero.Nombre, "video.mp4");
	ifstream Fichero(DatosFichero.Nombre, ios::binary);
	
	Fichero.seekg(0, ios::end);
	DatosFichero.Bytes = Fichero.tellg();
	DatosFichero.KB = (float)DatosFichero.Bytes / 1024;
	DatosFichero.MB = (float)DatosFichero.KB / 1024;
	DatosFichero.GB = (float)DatosFichero.MB / 1024;
	Fichero.close();
	
	cout << "----------------------------------------" << endl;
	cout << "Fichero	  : " << DatosFichero.Nombre << endl;
	cout << "Bytes(By)	  : " << DatosFichero.Bytes << endl;
	cout << "Kilobytes(KB): " << DatosFichero.KB << endl;
	cout << "Megabytes(MB): " << DatosFichero.MB << endl;
	cout << "Gigabytes(GB): " << DatosFichero.GB << endl;
	cout << "----------------------------------------" << endl;

}
