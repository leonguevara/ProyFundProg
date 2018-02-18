//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#ifndef PROBPACO_ALUMNO_H
#define PROBPACO_ALUMNO_H

//  Incluimos la clase Pesrona para poder heredarla en Alumno
#include "Persona.h"
//  Incluimos la clase Materia para poder generar un array de materias
#include "Materia.h"

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include <string>
using namespace std;

class Alumno : public Persona {
private:
    string matricula;
    string gene;
    Materia materias[6];
public:
    Alumno(string nombre, string fechaNac, char genero, string matricula, string gene);
    void setMaterias(Materia* materiaArray);
    Materia* getMaterias();
    string getMatricula();
    string getGene();
    string to_String();
};


#endif //PROBPACO_ALUMNO_H
