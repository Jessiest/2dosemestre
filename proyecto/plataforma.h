#ifndef _PLATAFORMA_H_
#define _PLATAFORMA_H_
#include "contenido.h"
#include "serie.h"
#include "episodio.h"
#include "pelicula.h"
#include "video.h"
#include <iostream>
#include <vector>
using std::vector;
using std::string;

class Plataforma
{
    private:
    vector<Contenido*> ver_cont;

    public:
    Plataforma();
    void menu();
    void ver_todo();
    void cargar_archivo();
    void mostrar_videosgeneral_calificacion();
    void mostrar_videos_genero();
    void mostrar_por_nombre();
    void calificar_video();
    Contenido* obten_video(string& nombre);
    Contenido* obten_contenido(string& nombre);
    int verifica_num_excepcion();
    ~Plataforma();
};
#endif