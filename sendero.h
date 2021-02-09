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
    inline string getNombre(){return nombre_;}
    inline float getLongitud() {return longitud_;}
    inline string getEstado() {return estado_;}
    inline bool getBici() {return bici_;}
    inline int getID() {return id_;}
    inline void setEstado (string estado) {estado_=estado;}
    inline setDificultad (int dificultad) {dificultad_=dificultad;}
};

#endif
