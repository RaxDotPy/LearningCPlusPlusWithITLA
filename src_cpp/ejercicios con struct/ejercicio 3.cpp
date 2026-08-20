#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct calculo {
	float numero;
	float doble() {
		return numero * 2;
	}
	float cubo() {
		return numero * numero * numero;
	}
	float mitad() {
		return numero / 2;
	}
};
int main() {
	calculo x;
	cout << "Ingrese un numero: " << endl;
	cin >> x.numero;
	cout << "El doble de " << x.numero << " es " << x.doble() << endl;
	cout << "El cubo de " << x.numero << " es " << x.cubo() << endl;
	cout << "La mitad de " << x.numero << " es " << x.mitad() << endl;
	return 0;
}
