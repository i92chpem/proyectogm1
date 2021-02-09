#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class Persona
{
  private:
    string nombre, apellidos, dni, fecha, email, direccion;
    unsigned int telefono;
  public:
    Persona();
    void setInfo(string n, string a, string D, string f, unsigned int t, string e, string d);
    string getDni();
    void imprimeContacto();
    inline string getNombre_Completo() {return nombre + " " + apellidos;}
    bool esDni(dni);
    virtual ~Persona(){};
};

#endif
