    #ifndef _VIDEO_H_
    #define _VIDEO_H_
    #include <string>
    using std::string;
    #include <iostream>
    #include "contenido.h"

    class Video: public Contenido
    {
        protected:
        string id;
        string nombre;
        float calificacion;
        float duracion;
        string fecha_estreno;

        public:
        Video(const string& id, const string& nomnbre, float calificacion, float duracion, 
        const string& fecha_estreno);
        bool operator == (const string& nombre); 
        void imprimir();
        float get_calif();
        void set_calif(float calificacion);
    };
    #endif