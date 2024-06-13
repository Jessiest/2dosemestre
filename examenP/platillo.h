#ifndef _PLATILLO_H_
#define _PLATILLO_H_
#include <iostream>
using std::string;

class Platillo
{
    public:
    virtual double getPrecio()=0;
    virtual void imprimir()=0;
}; 
#endif
