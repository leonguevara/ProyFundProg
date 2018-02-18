//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#include "Persona.h"

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include "string.h"
using namespace std;

//  Implementación del constructor persona
Persona::Persona(string nombre, string fechaNac, char genero) {
    this->nombre = nombre;
    this->fechaNac = fechaNac;
    this->genero = genero;
}

//  Getters & setters
void Persona::setEstatura(float estatura) {
    this->estatura = estatura;
}

void Persona::setPeso(float peso) {
    this->peso = peso;
}

string Persona::getNombre() {
    return this->nombre;
}

string Persona::getFechaNac() {
    return this->fechaNac;
}

//  Esta es la implementación de getGenero, de forma que regrese un string en vez
//  del char que es genero.  Para hacerlo, declar un string temporal al cual estoy
//  llamando g, diciéndole que tiene 1 carácter de largo y le envío el carácter, que
//  es this->genero.  Ya creado el string, regreso g.
string Persona::getGenero() {
    string g(1, this->genero);
    return g;
}

float Persona::getEstatura() {
    return this->estatura;
}

float Persona::getPeso() {
    return this->peso;
}

//  A diferencia de la implementación que ustedes hicieron, yo no implemento aquí el
//  método to_String porque es un método virtual y no debe implementarse en la superclase