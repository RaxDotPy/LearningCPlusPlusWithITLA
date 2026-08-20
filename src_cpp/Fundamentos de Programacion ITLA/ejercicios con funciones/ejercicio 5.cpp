#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void suma1al50() {
	int a;
	for (int i=1; i<=50; i++) {
		a = i + a;
	}
	cout << a << endl;
}
int main() {
	suma1al50();
	return 0;
}
