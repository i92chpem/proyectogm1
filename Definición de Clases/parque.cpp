#include "parque.h"
#include "sendero.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;

void Parque::setInfo(string u, string l, string p, string f, string r, string n, int s)
{
  ubicacion = u;
  localidad = l;
  provincia = p;
  fecha = f;
  reconocimientos = r;
  nombre = n;
  superficie = s;
}

void Parque::printInfo()
{
  cout << "\nNombre: " << nombre;
  
  cout << "\nUbicacion: " << ubicacion;
  
  cout << "\nLocalidad: " << localidad;
  
  cout << "\nProvincia: " << provincia;
  
  cout << "\nFecha de declaracion: " << fecha;
  
  cout << "\nNumero de senderos: " << senderos.size();
  
  cout << "\nSuperficie: " << superficie << " ha";
  
  cout << "\nReconocimientos: " << reconocimientos;
  
}
