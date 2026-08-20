#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void diasAHoras( int a) {
	cout << a << " dias son " << a * 24 << " horas." << endl; 
}

int main() {
	int num1;
	cout << "Ingrese numero de dias: ";
	cin >> num1;
	diasAHoras(num1);
	return 0;
}
