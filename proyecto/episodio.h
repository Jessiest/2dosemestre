#ifndef _EPISODIO_H_
#define _EPISODIO_H_
#include <iostream>
#include <string>
#include "contenido.h"
#include "video.h"
using std::string;

class Episodio : public Video
{
    private: 
    string genero;
    string nombre_episodio;
    int temporada;
    int num_episodio;
    string id_episodio;
    float calificacion_ep;
    float duracion_ep;
    string fecha_estreno_ep;
    
    public:
    Episodio(string id, string nombre, float calificacion, float duracion, string fecha_estreno, string nombre_episodio, int temporada, int num_episodio, string id_episodio);
    Episodio(const string& id, const string& nombre, float calificacion, float duracion,
    const string& fecha_estreno, const string& nombre_episodio, int temporada, int num_ep, const string& id_episodio,
    float calificacion_ep, float duracion_ep, const string& fecha_estreno_ep, const string& genero);
    bool operator>(float calificacion);
    bool operator==(const string& nombre);
    void print_if_gen(const string& gen);
    void imprimir();
    void calificar(float calif_nueva);
    float get_calif();
};
#endif