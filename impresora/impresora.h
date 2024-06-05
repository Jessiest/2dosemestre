#ifndef _IMPRESORA_H
#define _IMPRESORA_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;


class Impresora{
    private:
    int numHojas;
    string nombre;

    public:
    void imprimir (string);
    void recargar (int);
    Impresora(string, int);
};

#endif