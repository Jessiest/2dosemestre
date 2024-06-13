#include "hamburguesa.h"
#include "pedido.h"
#include "platillo.h"
using std::string;
#include <iostream>
using std::ostream;
using std::cout;
using std::endl;

Pedido::Pedido(int id, Cliente* cli) : idPedido(id), usuario(*cli)
{}

void Pedido::agregaPlatillo(Platillo* platillo)
{
    platillos.push_back(platillo);
}

void Pedido::despliegaHamburguesas()
{
    cout << "Hamburguesas en el menú: " << endl;
    for (auto &platillo : platillos)
    {
        if (dynamic_cast<Hamburguesa*>(platillo))
        {
            platillo->imprimir();
        }
    }
}

double Pedido::getTotalPedido()
{
    double total=0.0;
    for (auto &platillo : platillos)
    {
        total += platillo->getPrecio();
    }
    return total;
}
ostream& operator <<(ostream &os, Pedido &ped)
{
    os << "ID del pedido: " << ped.idPedido << endl;
    os << "Cliente: " << ped.usuario << endl;
    os << "Orden: " << endl;
    for (auto &platillo : ped.platillos)
    {
        platillo->imprimir();
    }
    os << "Total: $" << ped.getTotalPedido() << endl;
    return os;
}