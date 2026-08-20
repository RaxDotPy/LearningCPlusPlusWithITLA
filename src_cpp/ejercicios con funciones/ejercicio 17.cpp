#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void sumaEsParOImpar( int a, int b) {
	int suma = a + b;
	if ((suma%2)==0) {
		cout << "la suma de " << a <<
		" y " << b << " = " << suma << " es par. " << endl;
	} else if ((suma%2)!=0) {
		cout << "la suma de " << a <<
		" y " << b << " = " << suma << " es impar. " << endl;
	}
}

int main() {
	int num1, num2;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	sumaEsParOImpar(num1,num2);
	return 0;
}
