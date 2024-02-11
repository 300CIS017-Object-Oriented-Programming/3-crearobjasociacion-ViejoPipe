#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
#include <iostream>

using namespace std;

class Veterinario {
    private:
        string nombre;
        int aniosExperiencia;

    public:
        //Constructores
        Veterinario(){}; 
        Veterinario(string nombre, int aniosExperiencia);
        
        //Gets
        string getNombre();
        int getAnios();
        
        //Sets
        void setNombre(string nombre);
        void setAnios(int aniosExperiencia);

        //Otros metodos
        void mostrarInfo();
};


#endif //VETERINARIO_H