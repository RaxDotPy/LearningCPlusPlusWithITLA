#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string evalParOImpar(int num) {
	stringstream ss;
	if ((num%2)==0) {
		ss << num << " es par." << "\n";
	} else if ((num%2)!=0) {
		ss << num << " es impar." << "\n";
	}
    return ss.str();
}
int main() {
	int n = 1;
	while(n==1) {
		int numero;
		cout << "Ingrese un numero: "<< endl;
		cin >> numero;
		cout << evalParOImpar(numero);
	}
	return 0;
}
