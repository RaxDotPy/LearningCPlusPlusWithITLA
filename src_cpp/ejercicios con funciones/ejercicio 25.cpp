#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string num1al100() {
    stringstream ss;
    for (int i = 1; i <= 100; i++) {
        ss << i << "\n";
    }
    return ss.str();
}
int main() {
	cout << num1al100() << endl;
	return 0;
}
