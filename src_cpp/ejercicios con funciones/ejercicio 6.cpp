#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void paresDel2al20() {
	for (int i=2; i<=20; i++) {
		if ((i%2)==0) {
			cout << i << endl;
		}
	}
}
int main() {
	paresDel2al20();
	return 0;
}
