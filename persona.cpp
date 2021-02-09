#include <iostream>
#include <string>
#include "persona.h"

using namespace std;

void Persona::setInfo(string n, string a, string D, strind f, unsigned int t, string e, string d)
{
  nombre = n;
  apellidos = a;
  dni = D;
  fecha = f;
  telefono = t;
  email = e;
  direccion = d;
 }
