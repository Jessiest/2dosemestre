#ifndef _PLATAFORMA_H
#define _PLATAFORMA_H
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "contenido.h"
#include "pelicula.h"
#include "serie.h"
#include <vector>
using std::vector;
using std::ifstream;
using std::stringstream;
using std::to_string;
using std::stoi;
using  std::stof;
using std::endl;
using std::cin;


class Plataforma
{
    private:
    vector<Contenido*> ver_cont;

    public:
    Plataforma();
    void menu();
    void ver_todo();
    void mostrar_videosgeneral_calificacion();
    void mostrar_videos_genero();
    void mostrar_por_nombre();
    void calificar_video();
    int verifica_num_excepcion();
    ~Plataforma();
};
#endif