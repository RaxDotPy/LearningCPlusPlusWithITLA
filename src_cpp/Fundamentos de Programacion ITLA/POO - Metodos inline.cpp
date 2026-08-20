#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736
class Rectangulo
{
	private:
		// Atributos
		int Base, Altura;
		
	public:
		// Constructor
		Rectangulo() {Base = 10; Altura = 5;}
		
		// Consultores
		int GetAltura();
		int GetBase() 	{return Base;}
		int GetArea() 	{return Base * Altura;}
};

// Implementacion de Metodos de Clases
int Rectangulo::GetAltura() { return Altura; }

int main() 
{
	Rectangulo r;
	
	cout << r.GetAltura() << endl;
	cout << r.GetArea() << endl;

}
