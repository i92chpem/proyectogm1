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

 bool Persona::esDni(dni)
 {
  char letras[]={'T' , 'R' , 'W' , 'A' , 'G' , 'M' , 'Y' , 'F' , 'P' , 'D' , 'X' , 'B' ,'N' , 'J' , 'Z' , 'S' , 'Q' , 'V' , 'H' , 'L', 'C' , 'K' , 'E'};
  string numero = dni[0] + dni[1] + dni[2] + dni[3] + dni[4] + dni[5] + dni[6] + dni[7];
  if(strlen(dni)!=9)
  {return false;}
  else
  {atoi(numero);}
  char letra = dni[8];
  if(letra==letras[numero%23])
  {return true;}
  else
  {return false;}
 }                                 
 string Persona::getDNI()
 {return dni;}

 void Persona::imprimeContacto()
 {cout <<"\nTelefono: " << telefono << \nEmail: " << email << "\n";}
