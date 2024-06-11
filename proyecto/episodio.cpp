#include "episodio.h"
#include <iostream>
#include "pelicula.h"
#include "serie.h"
using std::string;
using std::endl;
using std::cout;

Episodio::Episodio(const string& id, const string& nombre, float calificacion, float duracion, const string& fecha_estreno, const string& nombre_episodio, int temporada, int num_ep, const string& id_episodio, float calificacion_ep, float duracion_ep, const string& fecha_estreno_ep, const string& genero)
: Video(id, nombre, calificacion, duracion, fecha_estreno), nombre_episodio(nombre_episodio), temporada(temporada), num_episodio(num_ep), id_episodio(id_episodio), calificacion_ep(calificacion_ep), duracion_ep(duracion_ep), fecha_estreno_ep(fecha_estreno_ep), genero(genero) {}

Episodio::Episodio(string id, string nombre, float calificacion, float duracion, string fecha_estreno, string nombre_episodio, int temporada, int num_episodio, string id_episodio)
: Video(id, nombre, calificacion, duracion, fecha_estreno), nombre_episodio(nombre_episodio), temporada(temporada), num_episodio(num_episodio), id_episodio(id_episodio) {}

bool Episodio::operator>(float calificacion) {
    return calificacion_ep > calificacion;
}

bool Episodio::operator==(const string& nombre) {
    return this->nombre_episodio == nombre;
}

void Episodio::print_if_gen(const string& gen) {
    if(this->genero == gen) {
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Calificacion: " << calificacion << endl;
        cout << "Duracion: " << duracion << endl;
        cout << "Fecha de estreno: " << fecha_estreno << endl;
        cout << "Genero: " << genero << endl;
    }
}
void Episodio::imprimir() {
    Video::imprimir();
    std::cout << "Nombre del Episodio: " << nombre_episodio << ", Temporada: " << temporada << ", Número de Episodio: " << num_episodio << std::endl;
}

void Episodio::calificar(float calif_nueva) {
    calificacion_ep = calif_nueva;
}

float Episodio::get_calif() {
    return calificacion_ep;
}