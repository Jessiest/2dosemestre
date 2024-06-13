#ifndef _CLIENTE_H_
#define _CLIENTE_H_
#include <iostream>
using std::string;
using std::ostream;

class Cliente
{
    private:
    int noID;
    string nombre;

    public:
    Cliente();
    Cliente(int nid, string nom);
    friend ostream& operator <<(ostream &os, Cliente &cli);
};
#endif
