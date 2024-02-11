//
// Created by lufe y Gonzo Feb2024.
//
#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

using namespace std;

class Propietario {
    private:
        string nombre;
        string docIdentidad;
        int edad;

    public:
        //Constructores
        Propietario(){};
        Propietario(string nombre, string docIdentidad);
        Propietario(int edad);
        
        //Gets
        string getNombre();
        string getIdentidad();
        int getEdad();

        //Sets
        void setNombre(string nombre);
        void setIdentidad(string docIdentidad);
        void setEdad(int edad);

        //Otros metodos
        void mostrarInfo();
};

#endif //PROPIETARIO_H
