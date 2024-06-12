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
    ifstream archivo;
    archivo.open("BasePeliculas.csv");
    string lineas;
    getline(archivo,lineas);
    while(getline(archivo,lineas)){
        stringstream s(lineas);
        string id, nombre, _duracion, genero, _calificacion, fecha_estreno, nombre_episodio, _temporada, _num_episodio, id_episodio;
        getline(s, id, ',');
        getline(s, nombre, ',');
        getline(s, _duracion, ',');
        getline(s, genero, ',');
        getline(s, _calificacion, ',');
        getline(s, fecha_estreno, ',');
        getline(s, nombre_episodio, ',');
        getline(s, _temporada, ',');
        getline(s, _num_episodio, ',');
        getline(s, id_episodio, ',');
        int duracion = stoi(_duracion);
        float calificacion = stof(_calificacion);
        if (nombre_episodio.empty()){
                Pelicula *pelicula = new Pelicula(id, nombre, calificacion, duracion, fecha_estreno, genero);
                ver_cont.push_back(pelicula);
        } else{
                int temporada = stoi(_temporada);
                int num_episodio = stoi(_num_episodio); 
                Episodio *episodio = new Episodio(id_episodio, nombre_episodio, calificacion, duracion, fecha_estreno, temporada, num_episodio);   
                bool jess = true;
                for(int i = 0; i<ver_cont.size(); i++)
                {
                    if(ver_cont[i]->identificacion(nombre))
                    {
                        Serie* serie = dynamic_cast<Serie*>(ver_cont[i]);
                        serie->agregar_episodio(episodio);
                        jess = false;
                    }
                }
                if (jess)
                {
                    Serie* serie = new Serie(id,nombre,genero);
                    ver_cont.push_back(serie);
                }

        }
    }
    archivo.close();
}

void Plataforma::menu()
{
    bool salir = false;
    do
    {
        int opcion = 0;
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
                salir = true;
                break;
        }
    } while(!salir);
}

void Plataforma::ver_todo()
{
    int c = 0;
    for (Contenido* contenido:ver_cont)
    {
        contenido->imprimir();
        c++;
    }
    cout << c << endl;
}

void Plataforma::mostrar_videosgeneral_calificacion()
{
    float califica;
    cout << "Contenido con calificación general de: ";
    califica = verifica_num_excepcion();
        for (Contenido * contenido:ver_cont)
        {
        *contenido > califica;
    }
}

void Plataforma::mostrar_videos_genero()
{
    string genero;
    cout << "Ingresa el género de tu interés: " << endl;
    cin >> genero;
    for (Contenido * contenido:ver_cont)
    {
        *contenido == genero;
    }
}

void Plataforma::mostrar_por_nombre()
{
    string nombre;
    cout << "Resultados coincidentes: " << endl;
    cin.ignore();
    getline(cin,nombre);
    for (Contenido * contenido:ver_cont)
    {
        contenido->mostrar_info_individual(nombre);
    }
}

void Plataforma::calificar_video()
{
    try
    {
    string nombre;
    float califica;
    cout << "Ingresa el nombre del contenido y la calificación que le asiganas: " << endl;
    cin.ignore();
    getline(cin,nombre);
    cin >> califica;
    for (Contenido *contenido:ver_cont)
    {
        contenido->calificar(nombre, califica);
    }}catch(const string& mensaje){
        cout << mensaje << ". Debe ser una califcación entre 1 y 10" << endl;
    }
}

int Plataforma::verifica_num_excepcion()
{
    int opcion;
    while (true)
    {
        try 
        {
            cin >> opcion;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                throw "Error: Carácter Inválido.";
            }
            return opcion;
        } catch (const char* msg) 
        {
            cout << msg << endl;
        }
    }
}

Plataforma::~Plataforma()
{
    for (int i = 0; i < ver_cont.size(); i++) 
    {
        delete ver_cont[i];
    }
}
