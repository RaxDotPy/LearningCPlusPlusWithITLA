#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string evaluarNum(int num) {
	stringstream ss;
	if (num>0) {
		ss << num << " es positivo." << "\n";
	} else if (num<0) {
		ss << num << " es negativo." << "\n";
	} else if (num==0) {
		ss << num << " es cero." << "\n";
	}
    return ss.str();
}
int main() {
	int numero;
	cout << "Ingrese un numero: "<< endl;
	cin >> numero;
	cout << evaluarNum(numero);
	return 0;
}
