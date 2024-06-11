#include "contenido.h"
#include "plataforma.h"
#include "serie.h"
#include "episodio.h"
#include "pelicula.h"
#include "video.h"
#include <iostream>
#include <vector>
#include <limits>
#include <fstream>
#include <sstream>
using std::endl;
using std::cout;
using std::vector;
using std::string;
using std::cin;
using std::ifstream;
using std::stringstream;
using std::getline;

Plataforma::Plataforma()
{
    cargar_archivo();
}

void Plataforma::menu()
{
    int opcion;
    do
    {
        cout << "1. Ver todo" << endl;
        cout << "2. Mostrar videos por calificacion" << endl;
        cout << "3. Mostrar videos por genero" << endl;
        cout << "4. Mostrar por nombre" << endl;
        cout << "5. Calificar video" << endl;
        cout << "6. Salir" << endl;
        cout << "Opcion: ";
        opcion = verifica_num_excepcion();
        switch(opcion)
        {
            case 1:
                ver_todo();
                break;
            case 2:
                mostrar_videosgeneral_calificacion();
                break;
            case 3:
                mostrar_videos_genero();
                break;
            case 4:
                mostrar_por_nombre();
                break;
            case 5:
                calificar_video();
                break;
            case 6:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while(opcion != 6);
}

void Plataforma::ver_todo()
{
    for(auto& i : ver_cont)
    {
        i->imprimir();
    }
}

void Plataforma::cargar_archivo()
{
    ifstream archivo("contenido.txt");
    if(archivo.is_open())
    {
        string linea;
        while(getline(archivo, linea))
        {
            stringstream ss(linea);
            string id, nombre, genero, calificacion, duracion, fecha_estreno, nombre_episodio, temporada, num_episodio, id_episodio, calificacion_ep, duracion_ep, fecha_estreno_ep;
            getline(ss, id, ',');
            getline(ss, nombre, ',');
            getline(ss, genero, ',');
            getline(ss, calificacion, ',');
            getline(ss, duracion, ',');
            getline(ss, fecha_estreno, ',');
            getline(ss, nombre_episodio, ',');
            getline(ss, temporada, ',');
            getline(ss, num_episodio, ',');
            getline(ss, id_episodio, ',');
            getline(ss, calificacion_ep, ',');
            getline(ss, duracion_ep, ',');
            getline(ss, fecha_estreno_ep, ',');
            if(id_episodio == "")
            {
                Pelicula* pelicula = new Pelicula(id, nombre, stof(calificacion), stof(duracion), fecha_estreno, genero);
                ver_cont.push_back(pelicula);
            }
            else
            {
                Episodio* episodio = new Episodio(id, nombre, stof(calificacion), stof(duracion), fecha_estreno, nombre_episodio, stoi(temporada), stoi(num_episodio), id_episodio, stof(calificacion_ep), stof(duracion_ep), fecha_estreno_ep);
                ver_cont.push_back(episodio);
            }
        }
    }
    else
    {
        cout << "No se pudo abrir el archivo" << endl;
    }
}

void Plataforma::mostrar_videosgeneral_calificacion()
{
    float calificacion;
    cout << "Ingrese la calificacion: ";
    calificacion = verifica_num_excepcion();
    for(auto& i : ver_cont)
    {
        if(i->get_calif() > calificacion)
        {
            i->imprimir();
        }
    }
}

void Plataforma::mostrar_videos_genero()
{
    string genero;
    cout << "Ingrese el genero: ";
    cin >> genero;
    for(auto& i : ver_cont)
    {
        i->print_if_gen(genero);
    }
}

void Plataforma::mostrar_por_nombre()
{
    string nombre;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    for(auto& i : ver_cont)
    {
        if(*i == nombre)
        {
            i->imprimir();
        }
    }
}

void Plataforma::calificar_video()
{
    string nombre;
    float calificacion;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese la calificacion: ";
    calificacion = verifica_num_excepcion();
    for(auto& i : ver_cont)
    {
        if(*i == nombre)
        {
            i->calificar(calificacion);
        }
    }
}

Contenido* Plataforma::obten_video(string& nombre)
{
    for(auto& i : ver_cont)
    {
        if(*i == nombre)
        {
            return i;
        }
    }
    return nullptr;
}

Contenido* Plataforma::obten_contenido(string& nombre)
{
    for(auto& i : ver_cont)
    {
        if(*i == nombre)
        {
            return i;
        }
    }
    return nullptr;
}

int Plataforma::verifica_num_excepcion()
{
    int num;
    while(!(cin >> num))
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Ingrese un numero valido: ";
    }
    return num;
}

Plataforma::~Plataforma()
{
    for(auto& i : ver_cont)
    {
        delete i;
    }
}
