#include <iostream>
#include <string>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct moneda {
	float usd;
	float usdADop() {
		return usd * 58.11;
	}
};
int main() {
	moneda x;
	cout << "Ingrese dolares: " << endl;
	cin >> x.usd;
	cout << "$US "<< x.usd << " son $RD " << x.usdADop() << endl;
	return 0;
}
