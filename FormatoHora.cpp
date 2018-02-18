//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#include "FormatoHora.h"

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include "string.h"
using namespace std;

//  Estos dos includes me servirán para construir el string con el formato HH:MM:SS
#include "sstream"
#include "iomanip"

//  Implementación del constructor de FormatoHora.  Hace uso de los métodos para verificar
//  si las horas, minutos o segundos son válidos.  De ser así, los asigna; de lo contrario,
//  asigna 0 en lugar del valor inválido.
FormatoHora::FormatoHora(int horas, int minutos, int segundos) {
    //  Aquí hago uso de una estructura de C que es muy útil para asignación mediante una
    //  decisión binaria.  El formato es pruebaLógica ? valorSiVerdadero : valorSiFalso.
    this->horas = validaHrs(horas) ? horas : 0;
    this->minutos = validaMS(minutos) ? minutos : 0;
    this->segundos = validaMS(segundos) ? segundos : 0;
}

//  Método para convertir en string los datos de FormatoHora, usando el formato HH:MM:SS
string FormatoHora::to_String() {
    //  Genero un objecto ostringstream
    ostringstream temp;

    //  A este objecto ostringstream, le digo que llene los espacios vacíos con el carácter
    //  '0'.  Le digo que el ancho del texto es de 6 (seis) caracteres (HHMMSS) y le envío
    //  un número que representa las horas, minutos y segundos.  Para que esté en un solo
    //  número, tomo como base los segundos, y le sumo los minutos multiplicados por 100 y
    //  las horas multiplicadas por 10,000.
    temp << setfill('0') << setw(6) << (horas*10000 + minutos*100 + segundos);

    //  Ya que generé el string con los valores correctos, inserto el carácter de ':' en las
    //  posiciones 2 y 4, generando así el formato HH:MM:SS.
    return temp.str().insert(2,":").insert(4,":");
}

//  Método para validar que las horas sean válidas.  Si el entero enviado es mayor o igual
//  que 0 y a la vez es menor o igual a 23, las horas son válidas por lo que el método regresa
//  verdadero; de lo contrario, las horas no son válidas por lo que regresa falso.
bool FormatoHora::validaHrs(int horas) {
    return (horas >= 0) && (horas <= 23);
}

//  Método para validar que los minutos o segundos sean válidos.  Si el entero enviado es mayor
//  o igual que 0 y a la vez es menor o igual a 59, las horas son válidas por lo que el método
//  regresa verdadero; de lo contrario, las horas no son válidas por lo que regresa falso.
bool FormatoHora::validaMS(int MS) {
    return (MS >= 0) && (MS <= 59);
}