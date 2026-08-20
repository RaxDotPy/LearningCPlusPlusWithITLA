#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string obtenerTabla7() {
    stringstream ss;
    for (int i = 1; i <= 12; i++) {
        ss << i << " x 7 = " << (i * 7) << "\n";
    }
    return ss.str();
}
int main() {
	cout << obtenerTabla7() << endl;
	return 0;
}
