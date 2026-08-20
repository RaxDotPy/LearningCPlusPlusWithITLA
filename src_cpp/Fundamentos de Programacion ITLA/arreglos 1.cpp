#include <iostream>

// Raymond Bernardo Paradell Martinez
// 2022-1736

using namespace std;

int main() {
	int numeros[] = {2,4,6,8,10};
	int suma = 0;
	
	for (int i = 0; i<5;i++) {
		suma = suma + numeros[i];
	}
	
	cout << "La suma de los elementos del vector es: " << suma << endl;
	
	return 0;
}
