#include "impresora.h"
#include "excepcion.h"

int main(){
    Impresora printer("HP",20);
    try{
        printer.imprimir("Hola biejo");
        printer.imprimir("Brugada, ganadora de las elecciones para la jefatura de Ciudad de México, según los resultados oficiales preliminares, compitió en la contienda como parte de la coalición formada por los partidos Morena, PT y PVEM.");

    }
    catch(string &mensaje){
        cout << "Atrapando una excepción string " << mensaje << endl;
        
    }
    catch(const char* mensajito){
        cout << "Atrapando como cadena de caracteres " << mensajito << endl;
    }
    catch( Excepcion &excep){
        cout << "Atrapé una Excepción " ;
        excep.imprimir();
    }
    
    catch(...){
        cout << "Atrapé .a excepción en el cachatodo"<< endl;
    }
    


    return 0;
}
