#include <string>
#include "hamburguesa.h"
#include "pedido.h"
#include "platillo.h"
#include "cliente.h"
using std::string;
#include <iostream>
using std::ostream;
using std::cout;
using std::endl;

int main()
{
    Cliente *cliente= new Cliente(100, "Jessica Ramirez");
    Platillo *Hamburguesa1= new Hamburguesa("Clásica", 5.99, 1);
    Platillo *Hamburguesa2= new Hamburguesa("Con queso", 6.99, 2);

    Pedido pedido(10, cliente);
    pedido.agregaPlatillo(Hamburguesa1);
    pedido.agregaPlatillo(Hamburguesa2);

    cout << pedido << endl;
    pedido.despliegaHamburguesas();

};