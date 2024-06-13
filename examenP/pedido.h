#ifndef _PEDIDO_H_
#define _PEDIDO_H_
#include <iostream>
#include "cliente.h"
#include "platillo.h"
#include <vector>
using std::vector;
using std::string;
using std::ostream;

class Pedido
{
    private:
    int idPedido;
    Cliente usuario;
    vector <Platillo*> platillos;

    public:
    Pedido(int id, Cliente* cli);
    void agregaPlatillo(Platillo *pla);
    void despliegaHamburguesas();
    double getTotalPedido();
    friend ostream& operator <<(ostream &os, Pedido &ped);
};
#endif