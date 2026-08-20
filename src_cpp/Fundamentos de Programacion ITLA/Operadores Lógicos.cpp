#include <iostream>

using namespace std;

int main() {
	
	// Raymond Bernardo Paradell Martinez
	// 2022-1736
    int edad = 25;
    bool licencia = true;

    if (edad >= 18 && licencia) { 
        cout << "Puede conducir" << endl; 
    } 

    bool trabajador = false;

    if (edad > 30 || trabajador) { 
        cout << "Aplica para programa" << endl; 
    } 

    if (!trabajador) { 
        cout << "No es trabajador" << endl; 
    } 

    return 0; 
}
