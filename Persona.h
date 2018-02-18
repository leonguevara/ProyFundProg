//
// Created by León Felipe Guevara Chávez on 2018-02-17.
//

#ifndef PROBPACO_PERSONA_H
#define PROBPACO_PERSONA_H

#include <string>

//  Esta línea es única y exculsivamente para no tener que poner std::string cada que quiero
//  declarar un string.
using namespace std;

//  Declaración de la clase persona.  La primera diferencia con respecto al código de ustedes
//  es que, de acuerdo al UML del profesor Francisco Alviso, las propiedades de la clase son
//  protected (#) en vez de private (-).
class Persona {
protected:
    string nombre;
    string fechaNac;
    char genero;
    float estatura;
    float peso;
public:
    Persona(string nombre, string fechaNac, char genero);
    void setEstatura(float estatura);
    void setPeso(float peso);
    string getNombre();
    string getFechaNac();
    string getGenero();     //  Ustedes la declararon char, aunque el UML les dice que es
                            //  string.  El enfoque de ustedes es el correcto: debería de
                            //  regresar un char ya que así está declarado género.  Sin
                            //  embargo, estoy implementando lo que dice el UML.
    float getEstatura();
    float getPeso();

    //  La otra gran diferencia, es la manera en que declararon el método to_String().  El
    //  UML les dice claramente que to_String():String = 0.  Esto significa que el método es
    //  virtual (es lo que significa el =0).  Este método será implementado por las subclases
    //  de Persona, y no por la clase Persona.
    virtual string to_String() = 0;
};


#endif //PROBPACO_PERSONA_H
