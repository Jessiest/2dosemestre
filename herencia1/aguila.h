#ifndef _AGUILA_H_
#define _AGUILA_H_
#include "ave.h"
#include <iostream>
using std::string;

class Aguila:public Ave
{
    public:
    Aguila();
    Aguila(string nombre);
    void volar();
};
#endif