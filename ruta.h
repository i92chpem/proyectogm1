#ifndef RUTA_H
#define RUTA_H

#include <string>
using namespace std;

class Ruta
{
  private:
    string nombre_, sendero_, fechahora_, tiemporecorrido_, dificultad_, monitor_;
    float km_;
    bool bicicleta_;
    
  public:
    Ruta()
    {
      nombre_="";
      sendero_="";
      fechahora_="";
      dificultad_="";
      monitor_="";
      km_=0;
      bicicleta_=false;
    }
    
#endif
