#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string dobCubMit(float num) {
	stringstream ss;
	float doble, cubo, mitad;
	doble = num * 2;
	cubo = num * num * num;
	mitad = num/2;
	ss << "El doble de " << num << " es: " << doble << "\n";
    ss << "El cubo de " << num << " es: " << cubo << "\n";
    ss << "La mitad de " << num << " es: " << mitad << "\n";
	return ss.str();
}
int main() {
	int n = 1;
	while(n==1) {
		float x;
		cout << "Ingrese un numero: ";
		cin >> x;
		cout << dobCubMit(x);
	}
	return 0;
}
