#include "hamburguesa.h"
using std::string;
#include <iostream>
using std::ostream;
using std::cout;
using std::endl;

Hamburguesa::Hamburguesa(string nom, double pre, int ncar): nombre(nom), precio(pre), numCarnes(ncar)
{}

double Hamburguesa::getPrecio()
{
    return precio* numCarnes;
}

void Hamburguesa::imprimir()
{
    cout << "Nombre: " << nombre << "Precio: $" << getPrecio() << endl;
}