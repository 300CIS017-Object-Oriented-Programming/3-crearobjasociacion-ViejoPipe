#include "Raza.h"
using namespace std;

Raza::Raza(string nombre, string paisOrigen){
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}

void Raza::agregarRaza(Perro* perro){
    this->pPerro = perro;
}

string Raza::getNombre(){
    return nombre;
}

string Raza::getPais(){
    return paisOrigen;
}

void Raza::setNombre(string nombre){
    this->nombre = nombre;
}

void Raza::setPais(int paisOrigen){
    this->paisOrigen = paisOrigen;
}

void Raza::mostrarInfo(){
    cout << "Nombre: " << nombre << ", Pais: " << paisOrigen << ", Perro: " << pPerro->getNombre() << endl; 
}