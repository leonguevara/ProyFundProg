//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#include "Alumno.h"

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include "string.h"
using namespace std;

//  Constructor
Alumno::Alumno(string nombre, string fechaNac, char genero, string matricula, string gene) : Persona(nombre, fechaNac, genero) {
    this->matricula = matricula;
    this->gene = gene;
}

//  Getters & setters
void Alumno::setMaterias(Materia *materiaArray) {
    this->&materias = materiaArray;
}

Materia *Alumno::getMaterias() {
    return this->materias;
}

string Alumno::getMatricula() {
    return this->matricula;
}

string Alumno::getGene() {
    return this->gene;
}

//  Este método implementa el to_String declarado en Persona.h.  A diferencia de la
//  solución que ustedes presentaron, pueden ver que no está la palabra reservada virtual.
//  Esta palabra reservada se utiliza sólo en las clases abstractas (superclases), no en
//  las subclases.
string Alumno::to_String() {
    string tmp = "Nombre del alumno: " + this->nombre + "\n";
    tmp += "Fecha de nacimiento del alumno: " + this->fechaNac + "\n";
    tmp += "Sexo del alumno: " + this->getGenero() + "\n";
    tmp += "Matrícula: " + this->matricula + "\n";
    tmp += "Gene: " + this->gene + "\n";
    for(int i = 0; i < 6; i++) {
        tmp += "Materia " + to_string(i) + ": " + materias[i].to_String();
    }

    return tmp;
}
