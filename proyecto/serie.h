#ifndef _SERIE_H_
#define _SERIE_H_
#include "episodio.h"
#include "contenido.h"
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;

class Serie : public Contenido
{
    private:
    string id;
    string nombre;
    string genero;
    vector<Episodio*> episodios;

    public:
    Serie();
    Serie(string id, string nombre, string genero);
    void calificar(string, float);
    void imprimir();
    void mostrar_info_individual(string);
    void operator > (float);
    void operator == (string);
    void agregar_episodio(Episodio*);
    bool identificacion(string);
    ~Serie();
};
#endif