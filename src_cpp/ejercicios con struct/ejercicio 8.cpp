#include <iostream>
#include <string>
#include <cmath>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

struct calcTriangulo {
	float cateto1;
	float cateto2;
	float hipotenusa() {
		return sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
	}
};
int main() {
	calcTriangulo x;
	cout << "Ingrese cateto 1: " << endl;
	cin >> x.cateto1;
	cout << "Ingrese cateto 2: " << endl;
	cin >> x.cateto2;
	cout << "La hipotenusa del triangulo es: " << x.hipotenusa() << endl;
	return 0;
}
