//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#ifndef PROBPACO_MATERIA_H
#define PROBPACO_MATERIA_H

#include <string>
#include "Horario.h"
#include "Profesor.h"

//  Esta línea es única y exculsivamente para no tener que poner std::string cada que quiero
//  declarar un string.
using namespace std;


class Materia {
private:
    string nombre;
    string clave;
    Horario *horario;
    Profesor *maestro;
public:
    Materia(string nombre, string clave);
    Materia(string nombre, string clave, Horario horario, Profesor maestro);
    void setHorario(Horario horario);
    void setMaestro(Profesor maestro);
    string getNombre();
    string getClave();
    Horario getHorario();
    Profesor getMaestro();
    string to_String();
};


#endif //PROBPACO_MATERIA_H
