#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct tiempo {
	int anio;
	int anioAMinuto() {
		return anio * 365 * 24 * 60;
	}
};
int main() {
	tiempo x;
	cout << "Ingrese numero de anios: " << endl;
	cin >> x.anio;
	cout << x.anio << " anios son " << x.anioAMinuto() << " minutos." << endl;
	return 0;
}
