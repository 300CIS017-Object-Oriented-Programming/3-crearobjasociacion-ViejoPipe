//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"

using namespace std;

class Perro {
    private:
        int edad;
        string nombre;
        string raza;
        string tamanio;
        string color;
        Propietario* pPropietario;
        Veterinario* vVeterinario;

    public:
        //Constructores
        Perro();
        Perro(string nombre, int edad, string raza, string color, string tamanio);
        
        //Gets
        Propietario* getPropietario();
        Veterinario* getVeterinario();
        int getEdad();
        string getRaza();
        string getNombre();
        string getTamanio();
        string getColor();

        //Sets
        void setPropietario(Propietario* pPropietario);
        void setVeterinario(Veterinario* vVeterinario);
        void setEdad(int edad);
        void setRaza(string raza);
        void setNombre(string nombre);
        void setTamanio(string tamanio);
        void setColor(string color);

        //Otros metodos
        void ladrar();
        void mostrarInfo();

        //Agregar
        void agregarPropietario(string nombre, string docIdentidad);
        void agregarVeterinario(string nombre, int aniosExperiencia);

        //Destructor
        ~Perro(); 
};
#endif //PERRO_H
