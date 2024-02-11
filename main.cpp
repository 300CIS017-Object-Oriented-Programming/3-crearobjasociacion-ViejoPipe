#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

using namespace std;

int main() {
    // Instanciar Perro
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    cout << "El nombre del pPropietario del perro "<< firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<endl;

    //Instanciar Perro
    Perro* snop = new Perro();
    snop->ladrar();

    //Instanciar Propietario
    Propietario* propietario = new Propietario(24);
    propietario->setNombre("DRR");
    propietario->setIdentidad("1105345013");

    //Mostrar informacion del propietario
    propietario->mostrarInfo();
    
    //Agregar un propietario a Snop
    snop->agregarPropietario(propietario->getNombre(), propietario->getIdentidad());

    //Consultar el docIdentidad del pPropietario del perro Snop
    cout << "El docIdentidad del pPropietario del perro es " << snop->getPropietario()->getIdentidad() << endl;
    
    //Consultar la edad del pPropietario del perro Snop
    snop->getPropietario()->setEdad(24);
    cout << "La edad del pPropietario del perro es " << snop->getPropietario()->getEdad() << endl;
    
    //Instanciar Veterinario
    Veterinario* veterinario = new Veterinario("Andres Acosta", 15);

    //Agregar un veterinario a Snop
    snop->agregarVeterinario(veterinario->getNombre(), veterinario->getAnios());
    
    //Consultar informacion del veterinario de Snop
    cout << "El nombre del vVeterinario del perro es " << snop->getVeterinario()->getNombre() << ", Los anios de experiencia del vVeterinario son " << snop->getVeterinario()->getAnios() << endl;
    
    //Instanciar Razas
    Raza* raza1 = new Raza("Mastin Napolitano", "Italia");
    Raza* raza2 = new Raza("Maltes", "Italia");

    //Agregar raza a Firulais y mostrar su informacion
    raza1->agregarRaza(&firulais);
    raza1->mostrarInfo();

    return 0;
}
