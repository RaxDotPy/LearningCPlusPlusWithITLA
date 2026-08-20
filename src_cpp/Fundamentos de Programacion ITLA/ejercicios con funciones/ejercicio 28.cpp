#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

string fibonacci() {
	int n = 13;
	long long a = 0, b = 1;
	stringstream ss;
	ss << "Serie de Fibonnaci (" << n << " terminos): " << "\n";
    for (int i = 1; i <= n; i++) {
        ss << a;
        if (i < n) ss << ", ";
        long long siguiente = a + b;
        a = b;
        b = siguiente;
        /*
		if ((i%2)==0) {
        	ss << i << "\n";
		}*/
    }
    return ss.str();
}
int main() {
	cout << fibonacci() << endl;
	return 0;
}
