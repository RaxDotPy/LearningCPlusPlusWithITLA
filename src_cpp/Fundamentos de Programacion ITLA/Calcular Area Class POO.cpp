//Programa para calcular Area
#include <iostream>
using namespace std;
class Cuadrado{
	//Identificador
	public:
		//Atributos
		float base;
		float altura;
		
		//Metodo Constructor
		Cuadrado(float b, float a)
		{
			this->altura = a;
			this->base = b;
		}
		//Calcular
		float CalcularArea()
		{
			//A = b * h
			return this->base * this->altura;
		}
};

int main()
{
	float b, a;
	cout << "Ingrese la base del Cuadrado: " << endl;
	cin >> b;
	cout << "Ingrese la altura del Cuadrado: " << endl;
	cin >> a;
	Cuadrado cuadrado1 = Cuadrado(b, a);
	cout << "El Area es igual a: " << cuadrado1.CalcularArea() << endl;
	system("pause");
}
