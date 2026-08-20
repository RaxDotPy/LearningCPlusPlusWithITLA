#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string diasAHoras(int dia) {
	stringstream ss;
	int horas = dia * 24;
	ss << dia << " dias son " << horas << " horas."<< "\n";
	return ss.str();
}
int main() {
	int n = 1;
	while(n==1) {
		int x;
		cout << "Ingrese dias en numeros: ";
		cin >> x;
		cout << diasAHoras(x);
	}
	return 0;
}
