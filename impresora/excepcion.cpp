#include "excepcion.h"

Excepcion::Excepcion(string msg){
    mensaje = msg;

}

void Excepcion::imprimir(){
    cout << mensaje << endl;

}