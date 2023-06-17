#include "FabricaVic.h"
#include "FabricaDeco.h"
#include "FabricaModerna.h"

// Estudiante: Anner Angulo Gutierrez cedula: 504530978

int main() {

	Fabrica* FE = NULL;
	int op;
	do {

		system("cls");
		FE = NULL;
		cout << endl;
		cout << "--------------ABSTRACT FACTORY--------------" << endl;
		cout << "--------------------MENU--------------------" << endl;
		cout << endl;
		cout << "   1- Creacion de Muebles Victorianos    " << endl;
		cout << "   2- Creacion de Muebles Art-Deco    " << endl;
		cout << "   3- Creacion de Muebles Modernos    " << endl;
		cout << "   4- salir" << endl;
		cout << "--------------------------------------------" << endl;
		cout << "Digite la opcion...";
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Muebles Victorianos" << endl;
			FE = new FabricaVic();
			cout << FE->toString() << endl;
			break;
		case 2:
			cout << "Muebles Art-Deco" << endl;
			FE = new FabricaDeco();
			cout << FE->toString() << endl;
			break;
		case 3:
			cout << "Muebles Modernos" << endl;
			FE = new FabricaModerna();
			cout << FE->toString() << endl;
			break;
		case 4: cout << "Thank you" << endl; break;
		}
		system("pause");
	} while (op != 4);

	return 0;
}