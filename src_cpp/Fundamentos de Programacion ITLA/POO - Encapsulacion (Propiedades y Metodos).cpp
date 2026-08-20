#include <iostream>
#include <string>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

class Persona
{
	private:
		string Nombre;
		float Peso;
	
	public:
		void SetNombre(string _Nombre){Nombre = _Nombre;}
		string GetNombre(){return Nombre;}
		//Peso
		void SetPeso(float _Peso) { Peso = _Peso; }
		float GetPeso() { return Peso;}
};

int main()
{
	Persona unapersona;
	
	unapersona.SetNombre("PEDRO");
	unapersona.SetPeso(89.50);
	
	cout << unapersona.GetNombre() << endl;
	cout << unapersona.GetPeso() << endl;
	cout << endl;
	system("pause");
}
