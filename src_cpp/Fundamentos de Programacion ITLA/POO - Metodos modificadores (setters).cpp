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
		
		// Modificadores (setters)
		void SetMarca(string _Marca) {Marca = _Marca;}
		void SetColor(string _Color) {Color = _Color;}

};

int main()
{
	Coche micoche;
	
	micoche.SetMarca("B M W");
	micoche.SetColor("Azul");
	cout << micoche.GetMarca() << endl;
	cout << micoche.GetColor() << endl;
}
