#ifndef _PELICULA_H_
#define _PELICULA_H_
#include <iostream>
#include "video.h"
#include "contenido.h"
using std::string;

class Pelicula: public Contenido, public Video
{
    private:
    string genero;
    public:
    Pelicula();
    Pelicula(string id, string nombre, float calificacion, int duracion, string fecha_estreno, string genero);
    void operator > (float);
    void operator == (string);
    void calificar(string nombre, float calificacion);
    void mostrar_info_individual(string);
    void imprimir();
    bool identificacion(string);
    ~Pelicula();
};
#endif