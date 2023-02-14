#include "util.h"
#include "centro.h"
#include "persona.h"
#include "animal.h"
#include "fecha.h"


void menu(int main);

int main()
{
	PtrLista l1 = new Lista();

	int main = 0;
	cout << "1. Ingresar como invitado." << endl;
	cout << "2. Ingresar como anfitrion." << endl;
	cout << "3. Ingresar a la sala de pruebas." << endl << endl;
	cout << "0. Cerrar la sesion." << endl;
	cin >> main;
	menu(main);
	return 0;
}

void menu(int main)
{
	int Respuesta1 = 0;
	int Respuesta2 = 0;
	int Respuesta3 = 0;
	cout << "1. Creacion." << endl;
	cout << "2. Visualizacion." << endl << endl;
	cout << "3. Busqueda." << endl << endl;
	cout << "4. Ordenar." << endl << endl;
	cout << "0. Volver al menu anterior." << endl;
	cin >> Respuesta1;
	switch (Respuesta1)
	{
		case 1:
			cout << "1. Crear animal." << endl;
			cout << "2. Crear empleado." << endl << endl;
			cout << "0. Volver." << endl;
			cin >> Respuesta2;

			switch (Respuesta2)
			{
				case 1:
					break;
				case 2:
					break;
				case 0:
					break;
				default:
					cout << "Eleccion incorrecta." << endl;
					break;
			}
			break;
		case 2:
			cout << "1. Filtrar animal." << endl;
			cout << "2. Filtrar empleado." << endl << endl;
			cout << "0. Volver." << endl;
			cin >> Respuesta2;

			switch (Respuesta2)
			{
				case 1:
					break;
				case 2:
					break;
				case 0:
					break;
				default:
					cout << "Eleccion incorrecta." << endl;
					break;
			}
			break;
		case 3:
			cout << "1. Buscar animal." << endl;
			cout << "2. Buscar empleado." << endl << endl;
			cout << "0. Volver." << endl;
			cin >> Respuesta2;

			switch (Respuesta2)
			{
				case 1:
					break;
				case 2:
					break;
				case 0:
					break;
				default:
					cout << "Eleccion incorrecta." << endl;
					break;
			}
			break;
		case 4:
			cout << "1. Ordenar animal." << endl;
			cout << "2. Ordenar empleado." << endl << endl;
			cout << "0. Volver." << endl;
			cin >> Respuesta2;

			switch (Respuesta2)
			{
				case 1:
					break;
				case 2:
					break;
				case 0:
					break;
				default:
					cout << "Eleccion incorrecta." << endl;
					break;
			}
			break;
	}
}
