#include <iostream>

// Raymond Bernardo Paradell Martinez
// 2022-1736

using namespace std;

int main() {
	int numeros[100], n;
	
	cout << "Digite el numero de elementos que va a tener el arreglo: " << endl;
	cin >> n;
	
	for (int i=0;i<n;i++) {
		cout << "Digite un numero: " << endl;
		cin >> numeros[i];
	}
	
	for (int i=0;i<n;i++) {
		cout << i << " -> " << numeros[i] << endl;
	}
	
	return 0;
}
