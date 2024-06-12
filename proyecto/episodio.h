#ifndef _EPISODIO_H_
#define _EPISODIO_H_
#include <ostream>
using std::ostream;
#include <string>
#include "contenido.h"
#include "video.h"
using std::string;

class Episodio : public Video
{
    private: 
    int temporada;
    int num_episodio;


    public:
    Episodio();
    Episodio(string id, string nombre, float calificacion, int duracion, string fecha_estreno, int temporada, int num_episodio);
    void calificar(string nombre, float calificacion);
    void mostrar_info_individual(string);
    void operator > (float);
    friend ostream & operator << (ostream &os, Episodio &c);
    ~Episodio();
};
#endif