#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void multN() {
	int n = 8; //Aqui poner numero al que sacarle tabla de multiplicar
	for (int i=1; i<=12; i++) {
		cout << i << " x " << n << " = " << i*n << endl;
	}
}

int main() {
	//cout << "Hola. " << endl;
	multN();
	return 0;
}
