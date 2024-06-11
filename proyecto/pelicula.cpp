#include "pelicula.h"
#include "video.h"
#include <iostream>
using std::string;
using std::endl;
using std::cout;

Pelicula::Pelicula(const string& id, const string& nombre, float calificacion, float duracion, const string& fecha_estreno, const string& genero)
: Video(id, nombre, calificacion, duracion, fecha_estreno), genero(genero) {}

bool Pelicula::operator >(float min_calif)
{
    return calificacion > min_calif;
}

bool Pelicula::operator ==(const string& nombre)
{
    return this->nombre == nombre;
}

void Pelicula::print_if_gen(const string& genero)
{
    if(this->genero == genero)
    {
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Calificacion: " << calificacion << endl;
        cout << "Duracion: " << duracion << endl;
        cout << "Fecha de estreno: " << fecha_estreno << endl;
        cout << "Genero: " << this->genero << endl;
    }
}


void Pelicula::imprimir()
{
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Calificacion: " << calificacion << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Fecha de estreno: " << fecha_estreno << endl;
    cout << "Genero: " << genero << endl;
}

void Pelicula::peli_ind()
{
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Calificacion: " << calificacion << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Fecha de estreno: " << fecha_estreno << endl;
    cout << "Genero: " << genero << endl;
}

float Pelicula::get_calif()
{
    return calificacion;
}

void Pelicula::calificar(float calif_nueva)
{
    calificacion = calif_nueva;
}

