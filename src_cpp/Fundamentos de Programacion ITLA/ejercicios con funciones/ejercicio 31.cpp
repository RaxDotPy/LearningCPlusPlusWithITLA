#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string tablaMult(int num) {
	int n = num;
	stringstream ss;
    for (int i = 1; i <= 12; i++) {
        ss << i << " x " << n << " = " << n*i << "\n";
    }
    return ss.str();
}
int main() {
	int n;
	cout << "Ingrese un numero para mostrar su tabla de multiplicar: "<< endl;
	cin >> n;
	cout << tablaMult(n);
	return 0;
}
