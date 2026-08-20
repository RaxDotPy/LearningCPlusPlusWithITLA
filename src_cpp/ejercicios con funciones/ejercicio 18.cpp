#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void sumaDeDosDig( int a) {
	int decena = (a/10);
	int unidad = (a%10);
	int suma = decena + unidad;
	cout << "La suma de los digitos de " << a << " es: " << suma << endl;
}

int main() {
	int num1;
	cout << "Ingrese un numero de dos digitos: ";
	cin >> num1;
	sumaDeDosDig(num1);
	return 0;
}
