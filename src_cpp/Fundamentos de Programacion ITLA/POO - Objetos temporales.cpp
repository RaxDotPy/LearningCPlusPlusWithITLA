#include <iostream>
using namespace std;
// Raymond Bernardo Paradell Martinez
// 2022-1736

class Punto
{
	public:
		int x, y;
		Punto(int _x = 0, int _y = 0) {
			x = _x;
			y = _y;
		}
};

void MostrarPunto(Punto p)
{
	cout << "x: " << p.x << endl;
	cout << "y: " << p.y << endl;
}

int main()
{
	
	MostrarPunto( Punto(5));
}
