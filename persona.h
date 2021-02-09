#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona
{
  private:
    string nombre_, apellidos_, dni_, fecha_, email_, direccion_;
    unsigned int telefono_;
  public:
    Persona();
    void setInfo(string n, string a, string D, string f, unsigned int t, string e, string d;
    string getDni();
    void imprimeContacto();
    inline string getNombre_Completo() {return nombre + " " + apellidos;}
    virtual ~Persona(){};
};

#endif
