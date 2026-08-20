#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void cualEsMayor( int a, int b) {
	if (a>b) {
		cout << a << " es mayor." << endl;
	} else if (b>a) {
		cout << b << " es mayor." << endl;
	}
}

int main() {
	int num1, num2;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cualEsMayor(num1,num2);
	return 0;
}
