#include <iostream>
#include <string>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

int suma1al50() {
	int a;
	for (int i=1;i<=50;i++) {
		a = i + a;
	}
	return a;
}

int main() {
	cout << suma1al50() << endl;
	return 0;
}
