#ifndef _HAMBURGUESA_H_
#define _HAMBURGUESA_H_
#include <iostream>
#include "platillo.h"
using std::string;

class Hamburguesa: public Platillo
{
    private:
    string nombre;
    double precio;
    int numCarnes;

    public:
    Hamburguesa(string nom, double pre, int ncar);
    void imprimir();
    double getPrecio();
};
#endif