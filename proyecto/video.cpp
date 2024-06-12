#include "video.h"
using std::endl;
using std::cout;

Video::Video()
{}

Video::Video(string id, string nombre, float calificacion, int duracion, string fecha_estreno)
{
    id = id;
    nombre = nombre ;
    calificacion = calificacion;
    duracion = duracion;
    fecha_estreno = fecha_estreno;
}

void Video::imprimir()
{
    cout << nombre<< "      Con Puntiación de: " << calificacion << endl;
    cout << duracion<< " minutos   Estrenado el: " << fecha_estreno <<endl;
    
}