#include "cliente.h"
using std::string;
#include <iostream>
using std::ostream;
using std::cout;
using std::endl;


Cliente:: Cliente()
{}

Cliente:: Cliente(int nid, string nom): noID(nid), nombre(nom) {}

ostream& operator <<(ostream &os, Cliente &cli)
{
    os <<"Cliente ID: " << cli.noID<< "Nombre: " << cli.nombre; 
    return os; 
}