//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#ifndef PROBPACO_PROFESOR_H
#define PROBPACO_PROFESOR_H


#include <string>
#include "Persona.h"

//  Esta línea es única y exculsivamente para no tener que poner std::string cada que quiero
//  declarar un string.
using namespace std;

class Profesor : public Persona {
private:
    string nomina;
public:
    Profesor(string nombre, string fechaNac, char genero, string nomina);
    //  El resto de los métodos colocados en el diagrama no son válidos.  Lo hablé con el profesor
    //  y me confirmó que eso métodos debían quitarse del UML.  El único método que nos falta por
    //  implementar es el to_String declarado en la superclase Persona.
    string to_String();
};


#endif //PROBPACO_PROFESOR_H
