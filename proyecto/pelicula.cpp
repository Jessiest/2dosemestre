#include "pelicula.h"
using std::endl;
using std::cout;
#include <iostream>
#include <sstream>
#include <string>
using std::string;
using std::stringstream;
using std::getline;


Pelicula::Pelicula()
{}

Pelicula::Pelicula(string id, string nombre, float calificacion, int duracion, string fecha_estreno, string _genero) : 
Video(id,nombre, calificacion,duracion,fecha_estreno)
{
    genero = genero;
}

void Pelicula::calificar(string nombre, float calificacion)
{
    if (calificacion >= 1 && calificacion <= 10) 
    {
        if (nombre == nombre) 
        {
            calificacion = calificacion;
        }
    } else {
        string msj = "Calificación  NO VÁLIDA";
        throw(msj);
    }
}

void Pelicula::imprimir()
{
    cout << "POR: " <<genero << endl;
    Video::imprimir();
}

void Pelicula::operator > (float califica)
{
    if (calificacion > califica )
    {
        Pelicula::imprimir();
    }
}

void Pelicula::operator==(string geneRO)
{
    stringstream s(genero);
    string token;
    while (getline(s, token, ';')) 
    {
        token.erase(0, token.find_first_not_of(' '));
        if (token == geneRO) 
        {
            Pelicula::imprimir();
            return;
        }
    }
}

bool Pelicula::identificacion(string nombre)
{
    if(nombre == nombre)
    {
        return true;
    }else{
        return false;
    }
}

void Pelicula::mostrar_info_individual(string nombre)
{
    if (nombre == nombre)
    {
        Pelicula::imprimir();
    }
}


Pelicula::~Pelicula()
{}