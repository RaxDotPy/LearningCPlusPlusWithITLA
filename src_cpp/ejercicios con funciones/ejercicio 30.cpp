#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string productoITBIS() {
	int precioProducto = 30000;
	int itebisProducto = precioProducto * 0.18;
	int precioFinal = precioProducto + itebisProducto;
	stringstream ss;
    ss << "El precio final del producto es: $RD " << precioFinal << "\n";
    return ss.str();
}
int main() {
	cout << productoITBIS() << endl;
	return 0;
}
