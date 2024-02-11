#include "Propietario.h"
using namespace std;

Propietario::Propietario(string nombre, string docIdentidad){
    this->nombre = nombre;
    this->docIdentidad = docIdentidad;
}

Propietario::Propietario(int edad){
    this->edad = edad;
}

void Propietario::mostrarInfo(){
    cout << "Nombre: " << nombre << ", docIdentidad: " << docIdentidad << ", edad: " << edad << endl; 
}

string Propietario::getNombre(){
    return nombre;
}

string Propietario::getIdentidad(){
    return docIdentidad;
}

int Propietario::getEdad(){
    return edad;
}

void Propietario::setNombre(string nombre){
    this->nombre = nombre;
}

void Propietario::setIdentidad(string docIdentidad){
    this->docIdentidad = docIdentidad;
}

void Propietario::setEdad(int edad){
    this->edad = edad;
}