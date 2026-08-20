#include <iostream>
#include <vector>
using namespace std;

// Raymond Bernardo Paradell Martinez
// 

int main() {
    int arr[] = {10, 3, 2, 5};
    int tam = 4;
    vector<int> numeros(arr, arr + tam);

    int sumaTotal = 0;
    for (int i = 0; i < (int)numeros.size(); i++) {
        sumaTotal += numeros[i];
    }

    bool encontrado = false;

    for (int i = 0; i < (int)numeros.size(); i++) {
        int sumaResto = sumaTotal - numeros[i];

        if (numeros[i] == sumaResto) {
            cout << "Se encontro el numero: " << numeros[i]
                 << " en la posicion " << i << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "Ningun numero es igual a la suma del resto." << endl;
    }

    return 0;
}
