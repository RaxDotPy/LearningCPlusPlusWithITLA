#include <iostream>

// Raymond Bernardo Paradell Martinez
// 2022-1736

using namespace std;

int main() {
	int numeros[] = {2,4,6,8,10};
	int multiplicacion = 1;
	
	for (int i = 0; i<5;i++) {
		multiplicacion = multiplicacion * numeros[i];
	}
	
	cout << "La multiplicacion acumulada de los elementos del vector es: " << multiplicacion << endl;
	
	return 0;
}
