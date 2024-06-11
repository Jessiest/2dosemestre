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
    float calificacion;
    string id;
    string nombre;
    string genero;
    vector<Episodio*> episodios;
    public:
    Serie(const string& id, const string& nombre, const string& genero);
    bool operator > (float min_calif);
    bool operator == (const string& nombre);
    void print_if_gen(const string& gen);
    float get_calif();
    void imprimir();
    void mostrar_serie_ind();
    void calificar(float calificacion);
    void agregar_episodios(Episodio* episodio);
};
#endif