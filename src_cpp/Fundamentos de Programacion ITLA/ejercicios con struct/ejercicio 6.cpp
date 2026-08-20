#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct posONeg {
	float numero;
	bool esPos() {
		return numero > 0;
	}
};
int main() {
	posONeg x;
	cout << "Ingrese numero: " << endl;
	cin >> x.numero;
	if (x.esPos()) {
		cout << "es positivo. " << endl;
	} else if (!(x.esPos())) {
		cout << "es negativo. " << endl;
	}
	return 0;
}
