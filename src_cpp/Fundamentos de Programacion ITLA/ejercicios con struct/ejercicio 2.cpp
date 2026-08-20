#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct articulo {
	string nombre;
	double precio;
	double itbis() {
		return precio * 0.18;
	}
	double precioMasITBIS() {
		return precio + itbis();
	}
};

int main() {
	articulo producto;
	cout << "Ingrese el nombre del articulo: " << endl;
	getline(cin, producto.nombre);
	cout << "Ingrese el precio del articulo: " << endl;
	cin >> producto.precio;
	cout << "Su articulo " << producto.nombre << " cuesta " 
	<< producto.precioMasITBIS() << " pesos con ITBIS incluidos. " << endl;
	return 0;
}
