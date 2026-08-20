#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void esPar( int num) {
	if ((num%2) == 0) {
		cout << num << " es par." << endl;
	} else if ((num%2) != 0) {
		cout << num << " No es par." << endl;
	}
}

int main() {
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	esPar(numero);
	return 0;
}
