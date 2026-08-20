#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

class Coche
{
	private:
		string Marca;
		string Color;
	public:
		Coche() {
			Marca = "Sin Marca";
			Color = "Sin Color";
		}
		Coche(string _Marca, string _Color) {
			Marca = _Marca;
			Color = _Color;
		}
		// Consultores
		string GetMarca() const { return Marca;}
		string GetColor() const { return Color;}

};

int main()
{
	Coche micoche("Ferrari", "Rojo");
	cout << "Marca: " << micoche.GetMarca() << endl;	
	cout << "Color: " << micoche.GetColor() << endl;
}
