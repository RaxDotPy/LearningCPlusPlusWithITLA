#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string aniosAMinutos(int anios) {
	stringstream ss;
	int yearToMinute = 1*60*24*365;
	int minutos = anios*yearToMinute;
	ss << anios << " anio(s) son " << minutos << " minutos."<< "\n";
	return ss.str();
}
int main() {
	int n = 1;
	while(n==1) {
		int x;
		cout << "Ingrese anios en numeros: ";
		cin >> x;
		cout << aniosAMinutos(x);
	}
	return 0;
}
