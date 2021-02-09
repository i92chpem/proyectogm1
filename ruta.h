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
    
    inline string getRuta() {return nombre_;}
    inline string getSendero() { return sendero_;}
    inline string getDificultad() {return dificultad_;}
    inline string getDistancia() {return km_;}
    inline string getBicicleta() {return bicicleta_;}
    inline string getInfo() {return nombre_ + " " + dificultad + " " + monitor_;}
      
      
#endif
