#include "episodio.h"
using std::endl;
using std::cout;
#include <iostream>
#include <sstream>
#include <string>
using std::string;
using std::stringstream;
using std::getline;


Episodio::Episodio()
{}

Episodio::Episodio(string id, string nombre, float calificacion, int duracion, string fecha_estreno, int temporada, int num_episodio)
:Video(id,nombre, calificacion,duracion,fecha_estreno)
{
    temporada = temporada;
    num_episodio = num_episodio;
}

void Episodio::calificar(string nombre, float calificacion)
{
    if (calificacion >= 1 && calificacion <= 10) 
    {
        if (nombre == nombre) 
        {
            calificacion = calificacion;
        }
    } else {
        string msj = "Calificación NO VÁLIDA";
        throw(msj);
    }
}

void Episodio::operator > (float califica)
{
    if (calificacion > califica )
    {
        cout << *this << endl;
    }
}


void Episodio::mostrar_info_individual(string nombre)
{
    if (nombre == nombre)
    {
        cout << *this << endl;
    }
}

ostream & operator << (ostream &os, Episodio &c)
{
    os << "Temporada: " << c.temporada << "  Capítulo: " << c.num_episodio << endl;
    c.Video::imprimir();
    return os;
}

Episodio::~Episodio()
{}

