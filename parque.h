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
    string ubicacion_, localidad_, provincia_, fecha_, reconocimientos_, nombre_;
    int superficie_;
    list<Sendero> senderos_;
    
  public:
    void setInfo(string ubicacion, string localidad, string provincia, string fecha, string reconocimientos, string nombre, int superficie);
    void printInfo();
    inline list <Sendero> getSenderos() {return senderos_;}
};

#endif
