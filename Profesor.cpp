//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#include "Profesor.h"

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include "string.h"
using namespace std;

//  Constructor de la clase profesor, que manda llamar al constructor de la superclase
Profesor::Profesor(string nombre, string fechaNac, char genero, string nomina) : Persona(nombre, fechaNac, genero) {
    this->nomina = nomina;
}

//  Este método implementa el to_String declarado en Persona.h.  A diferencia de la
//  solución que ustedes presentaron, pueden ver que no está la palabra reservada virtual.
//  Esta palabra reservada se utiliza sólo en las clases abstractas (superclases), no en
//  las subclases.
string Profesor::to_String() {
    //  Generamos un string temporal donde iremos armando la cadena a regresar, con todos
    //  los datos del profesor, cada uno de ellos en una línea.
    string temp = "Nombre profesor: " + this->nombre + "\n";
    temp += "Fecha de nacimiento profesor: " + this->fechaNac + "\n";
    temp += "Sexo profesor: " + this->getGenero() + "\n";
    temp += "Estatura profesor: " + to_string(this->estatura) + "\n";
    temp += "Peso profesor: " + to_string(this->peso) + "\n";
    temp += "Nómina profesor: " + this->nomina + "\n";

    return temp;
}