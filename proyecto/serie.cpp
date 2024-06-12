#include "serie.h"
using std::endl;
using std::cout;
#include <iostream>
#include <sstream>
#include <string>
using std::string;
using std::stringstream;
using std::getline;


Serie::Serie()
{}

Serie::Serie(string id, string nombre, string genero)
{
    id = id;
    nombre = nombre;
    genero = genero;
}

void Serie::calificar(string nombre,float califica)
{
    for (int i = 0; i<episodios.size(); i++)
    {
        episodios[i]->calificar(nombre, califica);
    }
}

void Serie::imprimir()
{
    cout << ":) :) :) :) :) :) :) :) :) :) :) :)" << endl;
    cout << "Género escogido: " << genero << endl;
    cout << nombre << endl;
}

void Serie::operator > (float califica)
{
    for (int i = 0; i<episodios.size(); i++)
    {
        *episodios[i] > califica;
    }
}

void Serie::mostrar_info_individual(string nombrE)
{
    if(nombre == nombrE)
    {
        Serie::imprimir();
        cout << "EPISODIOS: " << endl;
        cout << endl;
        for (int i = 0; i<episodios.size(); i++)
        {
            cout << *episodios[i];
        }
    }
}

void Serie::operator == (string geneRO)
{
    stringstream s(genero);
    string token;
    while (getline(s, token, ';')) 
    {
        token.erase(0, token.find_first_not_of(' '));
        if (token == geneRO) 
        {
            Serie::imprimir();
            return;
        }
    }
}

bool Serie::identificacion(string nombre)
{
    return nombre == nombre;
}


void Serie::agregar_episodio(Episodio* episodio) 
{
    episodios.push_back(episodio);
}


Serie::~Serie()
{}