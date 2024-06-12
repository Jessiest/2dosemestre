#ifndef _CONTENIDO_H_
#define _CONTENIDO_H_
#include <iostream>
#include <string>
using std::string;

class Contenido 
{
    public:
    virtual void operator > (float) = 0;
    virtual void operator == (string) = 0;
    virtual void calificar(string, float) = 0;
    virtual void imprimir() = 0;
    virtual void mostrar_info_individual(string)=0;
    virtual bool identificacion(string) = 0;
    virtual ~Contenido(){}; 

};
#endif