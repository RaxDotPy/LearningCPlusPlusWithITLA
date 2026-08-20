#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void dobCubYMitad( float a) {
	cout << "El doble de " << a << " es " << 2 * a << endl;
	cout << "El cubo de " << a << " es " << a* a * a << endl;
	cout << "La mitad de " << a << " es " << a/2 << endl;
}

int main() {
	float num1;
	cout << "Ingrese un numero: ";
	cin >> num1;
	dobCubYMitad(num1);
	return 0;
}
