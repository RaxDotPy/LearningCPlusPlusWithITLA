#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void factorialDe7() {
	int x = 7;
	for (int i=6; i>1; i--) {
		x = x * i;
	}
	cout << x << endl;
}
int main() {
	factorialDe7();
	return 0;
}
