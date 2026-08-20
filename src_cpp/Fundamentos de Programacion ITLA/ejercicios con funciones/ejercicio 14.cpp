#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void posONeg( int num) {
	if (num>0){
		cout << num << " es positivo." << endl;
	} else if (num<0) {
		cout << num << " es negativo." << endl;
	}
}

int main() {
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	posONeg(numero);
	return 0;
}
