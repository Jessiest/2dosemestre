#ifndef _CONTENIDO_H_
#define _CONTENIDO_H_
#include <iostream>
#include <string>
using std::string;

class Contenido 
{
    public:
    virtual bool operator>(float calificacion)=0;
    virtual bool operator==(const string& nombre)=0;
    virtual void print_if_gen(const string& gen)=0;
    virtual void imprimir()=0;
    virtual void calificar(float calificacion)=0;
    virtual float get_calif() = 0;
    virtual ~Contenido(){};

};
#endif