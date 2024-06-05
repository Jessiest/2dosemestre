#ifndef _EXCEPCION_H
#define _EXCEPCION_H
#include <exception>
#include <string>
#include <iostream>
using std::endl;
using std::cout;
using std::string;
using std::exception;

class Excepcion : public exception{
    private:
    string mensaje;

    public:
    Excepcion(string);
    void imprimir();

};

#endif