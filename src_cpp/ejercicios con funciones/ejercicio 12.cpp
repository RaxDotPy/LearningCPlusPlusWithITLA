#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void tablaDeNum( int num) {
	for (int i = 1; i<=12;i++) {
		cout << i << " x " << num << " = " << i*num << endl;
	}
}

int main() {
	int numero;
	cout << "Ingrese numero para calcular tabla de multiplicar: ";
	cin >> numero;
	tablaDeNum(numero);
	return 0;
}
