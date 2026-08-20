#include <iostream>
#include <fstream>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

int main() {
	ifstream fichero("numeros.txt");
	
	while(fichero.good()) cout << (char)fichero.get();
	
	fichero.close();
 }
