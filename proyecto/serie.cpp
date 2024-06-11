#include "serie.h"
#include "episodio.h"
#include "contenido.h"
#include <iostream>
#include "video.h"
using std::string;
using std::endl;
using std::cout;
using std::vector;

Serie::Serie(const string& id, const string& nombre, const string& genero)
: id(id), nombre(nombre), genero(genero) {}

bool Serie::operator >(float min_calif)
{
    return calificacion > min_calif;
}

bool Serie::operator ==(const string& nombre)
{
    return this->nombre == nombre;
}

void Serie::print_if_gen(const string& genero)
{
    if(this->genero == genero)
    {
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Calificacion: " << calificacion << endl;
        cout << "Genero: " << this->genero << endl;
    }
}

void Serie::imprimir()
{
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Calificacion: " << calificacion << endl;
    cout << "Genero: " << genero << endl;
}

void Serie::mostrar_serie_ind()
{
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Calificacion: " << calificacion << endl;
    cout << "Genero: " << genero << endl;
}

float Serie::get_calif()
{
    return calificacion;
}

void Serie::calificar(float calificacion)
{
    this->calificacion = calificacion;
}

void Serie::agregar_episodios(Episodio* episodio)
{
    episodios.push_back(episodio);
}

