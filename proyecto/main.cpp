#include "plataforma.h"
#include <iostream>
using std::string;

int main(){
    Plataforma plataforma;
    plataforma.cargar_archivo();
    plataforma.menu();
    return 0;
}