#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct detCapital {
	int activo;
	int pasivo;
	int capital() {
		return activo - pasivo;
	}
};
int main() {
	detCapital x;
	cout << "Ingrese sus activos en pesos: " << endl;
	cin >> x.activo;
	cout << "Ingrese sus pasivos en pesos: " << endl;
	cin >> x.pasivo;
	cout << "Su capital es: $RD " << x.capital() << endl;
	return 0;
}
