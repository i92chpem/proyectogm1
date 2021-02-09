#ifndef SENDERO_H
#define SENDERO_H

#include <string>
using namespace std;

class Sendero
{
  private:
    string nombre_, descripcion_, estado_;
    float longitud_;
    int dificultad_, id_;
    bool bici_;
    
  public:
    Sendero()
    {
      nombre_="";
      descripcion_="";
      estado_=""
      longitud_=0;
      dificultad_=0;
      id_=0;
      bici_=false;
    }
    
    string getNombre()
    {
      return nombre_;
  
