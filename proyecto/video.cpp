#include "video.h"
#include <iostream>
using std::string;
using std::endl;
using std::cout;

Video::Video(const string& id, const string& nombre, float calificacion, float duracion, const string& fecha_estreno)
: id(id), nombre(nombre), calificacion(calificacion), duracion(duracion), fecha_estreno(fecha_estreno) {}

bool Video::operator == (const string& nombre)
{
    return this->nombre == nombre;
}

void Video::imprimir()
{
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Calificacion: " << calificacion << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Fecha de estreno: " << fecha_estreno << endl;
}

float Video::get_calif()
{
    return calificacion;
}

void Video::set_calif(float calificacion)
{
    this->calificacion = calificacion;
}

