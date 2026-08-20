#include <iostream>
#include <fstream>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

int main() {
	ofstream fichero("numeros.txt");
	
	for (int x = 1; x <= 1000; x++) fichero << x << endl;
	fichero.close();
}
