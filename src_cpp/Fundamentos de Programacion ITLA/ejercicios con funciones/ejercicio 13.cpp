#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void evaluadorCar( char car) {
	if (car >= 'A' and car <= 'Z') {
		cout << "Es Mayuscula." << endl;
	} else if (car >= 'a' and car <='z') {
		cout << "Es Minuscula." << endl;
	} else {
		cout << "No corresponde al alfabeto." << endl;
	}
}

int main() {
	char caracter;
	cout << "Ingrese un solo caracter: ";
	cin >> caracter;
	evaluadorCar(caracter);
	return 0;
}
