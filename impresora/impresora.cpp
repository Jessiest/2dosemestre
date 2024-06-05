#include "impresora.h"
#include "excepcion.h"

Impresora::Impresora(string _nombre, int _hojas){
    numHojas = _hojas;
    nombre = _nombre;

}

void Impresora::imprimir(string txt){
    int hojas_usadas = txt.size();
    if (numHojas < hojas_usadas){
        Excepcion excep("Hubo una excepcion");
        throw(excep);
        //throw("Hojas insuficientes unu");
        //string mensaje = "Hojas insuficientes unu";
        //throw(mensaje);

    }
    cout << "imprimiendo..." << txt << endl;
    cout << "Utilizamos: " << hojas_usadas << endl;


}

void Impresora::recargar(int num){
    cout << "Se recargaron " << num << endl;
    
}