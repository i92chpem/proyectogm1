#ifndef VISITANTE_H
#define VISITANTE_H

#include <iostream>
#include <string>
#include "persona.h"

using namespace std;

class Visitante:public Persona
{
  private:
    string requisitosEspeciales_;
    
  public:
    inline void setRequisitos(string r) {requisitosEspeciales_ = r;}
    inline string getRequisitos() {return requisitosEspeciales_;}
};

#endif
