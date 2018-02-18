//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#ifndef PROBPACO_HORARIO_H
#define PROBPACO_HORARIO_H

#include <string>
#include "FormatoHora.h"

//  Esta línea es única y exculsivamente para no tener que poner std::string cada que quiero
//  declarar un string.
using namespace std;


class Horario {
private:
    //  Tuve que declarar como punteros inicio y fin para poder trabajar el constructor que
    //  recibe dos parámetros FormatoHora
    FormatoHora *inicio;
    FormatoHora *fin;
    string aula;
public:
    Horario(FormatoHora inicio, FormatoHora fin, string aula);
    Horario(int hora1, int minuto1, int segundo1, int hora2, int minuto2, int segundo2);
    void setAula(string aula);
    FormatoHora getInicio();
    FormatoHora getFin();
    string getAula();
    FormatoHora CalculaDuracion();
    string to_String();
};


#endif //PROBPACO_HORARIO_H
