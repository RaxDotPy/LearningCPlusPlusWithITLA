#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736
class Animal
{
	private:
		string Especie;
	public:
		Animal() {
			Especie = "SIN ESPECIE";
		}
		Animal(string _Especie) {
			Especie = _Especie;
		}
		string GetEspecie() {
			return Especie;
		}
};

int main()
{
	Animal Tarzan("PERRO"), Boli("GATO");
	Animal BillGates;
	
	cout << Tarzan.GetEspecie() << endl;
	cout << Boli.GetEspecie() << endl;
	cout << BillGates.GetEspecie() << endl;
	cout << endl;
	system("pause");
}
