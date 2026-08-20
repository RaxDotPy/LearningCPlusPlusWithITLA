#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void productoITBIS() {
	int precioProducto = 30000; //Aqui poner el precio del producto
	int itbisProducto = precioProducto * 0.18;
	int precioFinal = precioProducto + itbisProducto;
	cout << "El precio final del producto es: $RD " << precioFinal << endl;
}

int main() {
	productoITBIS();
	return 0;
}
