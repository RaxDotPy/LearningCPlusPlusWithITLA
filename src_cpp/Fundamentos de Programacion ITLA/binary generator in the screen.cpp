#include <iostream>
#include <random>   // For random_device, mt19937, uniform_int_distribution
using namespace std;

int main() {
    // Create a non-deterministic random device to seed the generator
    random_device rd;  

    // Mersenne Twister engine seeded with rd()
    mt19937 gen(rd());  

    // Uniform distribution for integers in range [1, 100]
    uniform_int_distribution<int> dist(0,1);

    for (int i = 0; i < 10; ++i) {
    	int rNumber = dist(gen);
    	if (rNumber < 10) {
    		i = i - 1;
    		cout << rNumber << " ";
		}
    }
    cout << endl;

    return 0;
}
