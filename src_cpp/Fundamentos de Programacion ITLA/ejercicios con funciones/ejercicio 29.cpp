#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string multN() {
	int n = 8;
	stringstream ss;
    for (int i = 1; i <= 12; i++) {
        ss << i << " x " << n << " = " << n*i << "\n";
    }
    return ss.str();
}
int main() {
	cout << multN() << endl;
	return 0;
}
