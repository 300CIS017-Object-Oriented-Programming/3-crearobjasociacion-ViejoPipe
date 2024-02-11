#include "Veterinario.h"
using namespace std;

Veterinario::Veterinario(string nombre, int aniosExperiencia){
    this->nombre = nombre;
    this->aniosExperiencia = aniosExperiencia;
}

string Veterinario::getNombre(){
    return nombre;
}

int Veterinario::getAnios(){
    return aniosExperiencia;
}

void Veterinario::setNombre(string nombre){
    this->nombre = nombre;
}

void Veterinario::setAnios(int aniosExperiencia){
    this->aniosExperiencia = aniosExperiencia;
}

void Veterinario::mostrarInfo(){
    cout << "Nombre: " << nombre << ", " << aniosExperiencia << endl;
}