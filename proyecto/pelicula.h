#ifndef _PELICULA_H_
#define _PELICULA_H_
#include <iostream>
#include "video.h"
using std::string;

class Pelicula: public Video
{
    private:
    string genero;
    public:
    Pelicula(const string& id, const string& nomnbre, float calificacion, float duracion, 
    const string& fecha_estreno,const string& genero);
    bool operator >(float min_calif);
    bool operator ==(const string& nombre);
    void print_if_gen(const string& genero);
    void imprimir();
    void peli_ind(); 
    float get_calif();
    void calificar(float calif_nueva);
};
#endif