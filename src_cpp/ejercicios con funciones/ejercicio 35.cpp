#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string cualEsMayor(int a, int b) {
	stringstream ss;
	if (a>b) {
		ss << a << " es mayor que " << b << "."<< "\n";
	} else if (b>a) {
		ss << a << " es menor que " << b << "." << "\n";
	} else if (a==b) {
		ss << a << " es igual que " << b << "." << "\n";
	}
    return ss.str();
}
int main() {
	int n = 1;
	while(n==1) {
		int x, y;
		cout << "Ingrese primer numero: ";
		cin >> x;
		cout << "Ingrese segundo numero: ";
		cin >> y;
		cout << cualEsMayor(x,y);
	}
	return 0;
}
