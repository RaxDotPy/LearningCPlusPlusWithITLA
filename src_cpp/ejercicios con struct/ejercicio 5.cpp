#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct calculadora {
	float a;
	float b;
	float suma() {
		return a + b;
	}
	float resta() {
		return a - b;
	}
	float multiplicacion() {
		return a * b;
	}
	float division() {
		return a / b;
	}
};
int main() {
	calculadora x;
	cout << "Ingrese el numero a: " << endl;
	cin >> x.a;
	cout << "Ingrese el numero b: " << endl;
	cin >> x.b;
	cout << x.a << " + " << x.b << " = " << x.suma() << endl;
	cout << x.a << " - " << x.b << " = " << x.resta() << endl;
	cout << x.a << " * " << x.b << " = " << x.multiplicacion() << endl;
	cout << x.a << " / " << x.b << " = " << x.division() << endl;
	return 0;
}
