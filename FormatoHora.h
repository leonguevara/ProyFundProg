//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#ifndef PROBPACO_FORMATOHORA_H
#define PROBPACO_FORMATOHORA_H

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include <string>
using namespace std;

class FormatoHora {
private:
    int horas;
    int minutos;
    int segundos;
public:
    FormatoHora(int horas, int minutos, int segundos);
    string to_String();
    bool validaHrs(int horas);
    bool validaMS(int MS);
};


#endif //PROBPACO_FORMATOHORA_H
