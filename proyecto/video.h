#ifndef _VIDEO_H_
#define _VIDEO_H_
#include <string>
using std::string;
#include <iostream>


class Video
{
    private:
    string id;
    int duracion;
    string fecha_estreno;

    protected:
    string nombre;
    float calificacion;

    public:
    Video();
    Video(string id, string nombre, float calificacion, int duracion, string fecha_estreno);
    void imprimir();
};   
#endif