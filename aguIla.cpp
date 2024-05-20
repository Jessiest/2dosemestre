#include <iostream>
#include "aguila.h"
using std::cout;
using std::endl;
using std::string;

Aguila::Aguila()
{

}
Aguila::Aguila(string nombre):Ave(nombre)
{
    
}

void Aguila::volar()
{
   cout<< "Soy una ave llamda " << nombre << " y vuelo, además soy la más rápida" << endl;
}