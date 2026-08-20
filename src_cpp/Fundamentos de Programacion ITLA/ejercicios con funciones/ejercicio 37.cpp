#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string sumaDigitos(int num) {
	stringstream ss;
	int decena, unidad, suma;
	decena = (num/10);
	unidad = num%10;
	suma = decena + unidad;
	ss << "La suma de los digitos de " << num << " es: " << suma << "\n";
    return ss.str();
}
int main() {
	int n = 1;
	while(n==1) {
		int x;
		cout << "Ingrese un numero de dos digitos: ";
		cin >> x;
		cout << sumaDigitos(x);
	}
	return 0;
}
