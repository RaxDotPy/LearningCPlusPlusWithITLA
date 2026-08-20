#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string num40al70() {
    stringstream ss;
    for (int i = 40; i <= 70; i++) {
        ss << i << "\n";
    }
    return ss.str();
}
int main() {
	cout << num40al70() << endl;
	return 0;
}
