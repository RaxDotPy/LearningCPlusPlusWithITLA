#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string paresDel2al20() {
    stringstream ss;
    for (int i = 2; i <= 20; i++) {
        if ((i%2)==0) {
        	ss << i << "\n";
		}
    }
    return ss.str();
}
int main() {
	cout << paresDel2al20() << endl;
	return 0;
}
