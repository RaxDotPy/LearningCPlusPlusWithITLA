#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void interVar( int a, int b) {
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	int c = a;
	a = b;
	b = c;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main() {
	int x, y;
	cout << "Ingresa el valor de a: ";
	cin >> x;
	cout << "Ingresa el valor de b: ";
	cin >> y;
	interVar(x, y);
	return 0;
}
