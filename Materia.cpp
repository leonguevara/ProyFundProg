//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#include "Materia.h"
#include "Profesor.h"
#include "Horario.h"

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include "string.h"
using namespace std;


//  Constructores
Materia::Materia(string nombre, string clave) {
    this->nombre = nombre;
    this->clave = clave;
}

Materia::Materia(string nombre, string clave, Horario horario, Profesor maestro) {
    this->nombre = nombre;
    this->clave = clave;
    this->horario = &horario;
    this->maestro = &maestro;
}

//  Getters & setters
void Materia::setHorario(Horario horario) {
    this->horario = &horario;
}

void Materia::setMaestro(Profesor maestro) {
    this->maestro = &maestro;
}

string Materia::getNombre() {
    return this->nombre;
}

string Materia::getClave() {
    return this->clave;
}

Horario Materia::getHorario() {
    return this->&horario;
}

Profesor Materia::getMaestro() {
    return this->&maestro;
}

string Materia::to_String() {
    string temp = this->nombre + ", " + this->clave + ", de " + this->horario->to_String() + " " + this->horario->getAula() + ", " + this->maestro->getNombre();
    return temp;
}