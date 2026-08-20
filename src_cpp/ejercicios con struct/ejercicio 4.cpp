#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct tiempo {
	int dias;
	int diasAHoras() {
		return dias * 24;
	}
};
int main() {
	tiempo x;
	cout << "Ingrese numero de dias: " << endl;
	cin >> x.dias;
	cout << x.dias << " dias son " << x.diasAHoras() << " horas. " << endl;
	return 0;
}
