#ifndef RAZA_H
#define RAZA_H

#include <string>
#include <iostream>
#include "Perro.h"

using namespace std;

class Raza {
    private:
        string nombre;
        string paisOrigen;
        Perro* pPerro;

    public:
        //Constructores
        Raza(){};
        Raza(string nombre, string paisOrigen);

        //Gets
        string getNombre();
        string getPais();

        //Sets
        void setNombre(string nombre);
        void setPais(int aniosExperiencia);

        //Agregar
        void agregarRaza(Perro* perro);

        //Otros metodos
        void mostrarInfo();
};  


#endif //RAZA_H