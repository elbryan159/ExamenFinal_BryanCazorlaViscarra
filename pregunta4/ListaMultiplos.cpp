#include "ListaMultiplos.h"



ListaMultiplos::ListaMultiplos(int tam)
{
	listaMultiplos = new int[tam];
	this->tam = tam;

}


ListaMultiplos::~ListaMultiplos()
{
	delete[] listaMultiplos;
}


void ListaMultiplos::multiplos(int value)
{
	for (int i = 0; i < tam; i++)
	{
		listaMultiplos[i] = (i + 1) * value;
	}
}

void ListaMultiplos::mostrarListaPorPantalla()
{
	cout << "[ ";
	for (int i = 0; i < tam; i++)
	{
		cout << listaMultiplos[i];
		cout << " ";
	}
	cout << "]";
}