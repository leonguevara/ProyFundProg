//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#include "Horario.h"
#include "FormatoHora.h"

//  Incluyo string.h y agrego el namespace std para no tener que usar std::string
//  cada que declaro un string.
#include "string.h"
using namespace std;

//  Constructor de Horario, recibiendo dos parámetros del tipo FormatoHora (inicio y
//  fin de la sesión), un string con el aula de la sesión.  Este constructor ustedes
//  no lo implementaron en su solución, a pesar de ser declarado en su header file.
Horario::Horario(FormatoHora inicio, FormatoHora fin, string aula) {
    this->inicio = &inicio;
    this->fin = &fin;
    this->aula = aula;
}

//  Constructor de Horario, recibiendo seis enteros.
Horario::Horario(int hora1, int minuto1, int segundo1, int hora2, int minuto2, int segundo2) {
    this->inicio = new FormatoHora(hora1, minuto1, segundo1);
    this->fin = new FormatoHora(hora2, minuto2, segundo2);
}

//  Getters & setters
void Horario::setAula(string aula) {
    this->aula = aula;
}

FormatoHora Horario::getInicio() {
    return this->&inicio;
}

FormatoHora Horario::getFin() {
    return this->&fin;
}

string Horario::getAula() {
    return this->aula;
}

//  No existe manera de calcular la duración, ya que no existen métodos para recuperar los datos
//  de horas, minutos y segudos en los objectos FormatoHora inicio y fin.  Este método no debería
//  existir.
FormatoHora Horario::CalculaDuracion() {
    FormatoHora temp(0,0,0);
    return temp;
}