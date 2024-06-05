#include <iostream>
#include "ave.h"
using std::cout;
using std::endl;

Ave::Ave()
{

}

Ave::Ave(string nom)
{
    nombre= nom;
}

void Ave::volar()
{
    cout << "Soy una ave llamada " << nombre << " y vuelo" << endl;
}