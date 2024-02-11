#include "Perro.h"
#include <iostream>

using namespace std;

Perro::Perro(){
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}

Perro::Perro(string nombre, int edad, string raza, string color, string tamanio):
    nombre(nombre), edad(edad), raza(raza), color(color), tamanio(tamanio){}

void Perro::ladrar(){
    cout << "Guau Guau" << endl;
}

//En este metodo por medio del constructor Propietario se le asocia al perro
void Perro::agregarPropietario(string nombre, string docIdentidad){
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::agregarVeterinario(string nombre, int aniosExperiencia){
    this->vVeterinario = new Veterinario(nombre, aniosExperiencia);
}

void Perro::mostrarInfo(){
    cout << "Edad: " << edad << ", Nombre: " << nombre << ", Raza: " << raza << ", Tamanio: " << tamanio << ", Color: " << color << ", Propietario: " << pPropietario << ", Veterinario: " << vVeterinario << endl;
}

Propietario *Perro::getPropietario(){
    return this->pPropietario;
}

Veterinario* Perro::getVeterinario(){
    return this->vVeterinario;
}

int Perro::getEdad(){
    return edad;
}

string Perro::getRaza(){
    return raza;
}

string Perro::getTamanio(){
    return tamanio;
}

string Perro::getNombre(){
    return nombre;
}

string Perro::getColor(){
    return color;
}

void Perro::setPropietario(Propietario* pPropietario){
    this->pPropietario = pPropietario;
}

void Perro::setVeterinario(Veterinario* vVeterinario){
    this->vVeterinario = vVeterinario;
}

void Perro::setEdad(int edad){
    this->edad = edad;
}

void Perro::setRaza(string raza){
    this->raza = raza;
}

void Perro::setTamanio(string tamanio){
    this->tamanio = tamanio;
}

void Perro::setNombre(string nombre){
    this->nombre = nombre;
}

void Perro::setColor(string color){
    this->color = color;
}

Perro::~Perro(){
    delete pPropietario;
}




