
#include "ListaMultiplos.h"

int main()
{
	int tam, valor;
	cout << "Ingrese el tamaño de la lista" << endl;
	cin >> tam;
	cout << endl;
	ListaMultiplos l1(tam);
	cout << "Ingrese el valor" << endl;
	cin >> valor;
	cout << endl;
	l1.multiplos(valor);
	l1.mostrarListaPorPantalla();
	cout << endl;
	system("pause");
	return 0;
}