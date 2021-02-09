#ifndef PARQUE_H
#define PARQUE_H

#include "sendero.h"
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Parque
{
  private:
    string ubicacion, localidad, provincia, fecha, reconocimientos, nombre;
    int superficie;
    list<Sendero> senderos;
    
  public:
    void setInfo(string u, string l, string p, string f, string r, string n, int s);
    void printInfo();
    inline list <Sendero> getSenderos() {return senderos;}
};

#endif
