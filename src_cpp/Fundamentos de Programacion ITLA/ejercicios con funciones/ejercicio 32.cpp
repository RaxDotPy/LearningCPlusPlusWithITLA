#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string minOMayuscula(string c) {
	string resultado;
	if (c>= "A" and c <= "Z") {
		resultado = "Es Mayuscula.";
	} else if (c>= "a" and c <= "z") {
		resultado = "Es Minuscula.";
	} else {
		resultado = "No corresponde al alfabeto.";
	}
	return resultado;
}
int main() {
	string car;
	cout << "Ingrese un solo caracter: "<< endl;
	cin >> car;
	cout << minOMayuscula(car);
	return 0;
}
