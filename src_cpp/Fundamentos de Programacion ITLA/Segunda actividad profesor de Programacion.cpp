// Ejemplo de variable global
#include <iostream>
using namespace std;

//se declara x como global.
int x = 1;

void funcion();

int main()
{
	// Raymond Bernardo Paradell Martinez
	// 2022-1736
    cout << x << endl; // muestra 1
    x++;
    cout << x << endl, // muestra 2
    
    //se llama a una función que accede a 
    //la variable global x
    funcion();
    
    cout << x << endl, // muestra 4
    system("pause");
}

void funcion()
{
    //la función tiene acceso a la variable global x
    x = x * 2;
}
