#include <iostream>
#include <string>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

int factorialDe7() {
	int x = 7;
	for (int i=6;i>1;i--) {
		x = x * i;
	}
	return x;
}

int main() {
	cout << factorialDe7() << endl;
	return 0;
}
