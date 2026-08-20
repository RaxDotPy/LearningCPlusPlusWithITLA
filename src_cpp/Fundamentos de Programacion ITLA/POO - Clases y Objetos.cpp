#include <iostream>
// Raymond Bernardo Paradell Martinez
// 2022-1736
using namespace std;

class Mensajes
{
	public:
		void MensajePuntos()
		{
			cout << ".........................." << endl;
			cout << "     Mensaje de puntos    " << endl;
			cout << ".........................." << endl;
		}
		void MensajeLineas()
		{
			cout << "--------------------------" << endl;
			cout << "     Mensaje de lineas    " << endl;
			cout << "--------------------------" << endl;
		}
		
		void MensajeAsteriscos()
		{
			cout << "**************************" << endl;
			cout << "   Mensaje de asteriscos  " << endl;
			cout << "**************************" << endl;
		}
};

int main() {
	
	Mensajes miMensaje, miOtroMensaje;
	
	miOtroMensaje.MensajeAsteriscos();
	
	cout << endl;
	system("pause");
}
