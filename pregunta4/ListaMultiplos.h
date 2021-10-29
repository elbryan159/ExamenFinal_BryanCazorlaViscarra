#pragma once
#include <iostream>
#include <string>
using namespace std;
class ListaMultiplos
{
private:
	int* listaMultiplos;
	int tam;
public:
	ListaMultiplos(int tam);
	~ListaMultiplos();
	void multiplos(int value);
	void mostrarListaPorPantalla();
};

