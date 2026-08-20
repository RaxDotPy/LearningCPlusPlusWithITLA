#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

void fibonacci() {
	int n = 13;

    long long a = 0, b = 1;

    cout << "Serie de Fibonacci (" << n << " términos): ";

    for (int i = 1; i <= n; i++) {
        cout << a;
        if (i < n) cout << ", "; 
        long long siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;
}
int main() {
	fibonacci();
	return 0;
}
