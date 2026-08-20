#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string evalSuma(int a, int b) {
	stringstream ss;
	int suma = a + b;
	if ((suma%2)==0) {
		ss << "La suma de " << a << " y " << b << " (" <<
		 suma << ") es par." << "\n";
	} else if ((suma%2)!=0) {
		ss << "La suma de " << a << " y " << b << " (" <<
		 suma << ") es impar." << "\n";
	}
    return ss.str();
}
int main() {
	int n = 1;
	while(n==1) {
		int x, y;
		cout << "Ingrese primer numero: ";
		cin >> x;
		cout << "Ingrese segundo numero: ";
		cin >> y;
		cout << evalSuma(x,y);
	}
	return 0;
}
