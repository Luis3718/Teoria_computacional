/*
  Instituto Politécnico Nacional
  ESCOM
  Alvarado Romero Luis Manuel
  Materia:Teoria de la computacion
  Grupo: 4CV5
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int nalfabeto;
int imprimiralfabeto(char abc[],int nalfabeto)
{
  //mostramos el alfabeto
  cout<<"El alfabeto es: ";
  cout<<"Σ={";
  for(int i=0;i<nalfabeto;i++)
  {
    cout<<abc[i];
    if(i<nalfabeto-1)
    {
      cout<<", ";
    }
  }
  cout<<"}" <<endl;
  return 0;
}
int main ()
{
  int nalfabeto;
  cout<<"De cuantas letras desea generar su alfabeto: " <<endl;
  cin>>nalfabeto;
  //definimos el alfabeto
  char abc[nalfabeto];
  //llenamos el alfabeto
  cout<<"Ingrese el simbolo del alfabeto sin espacios y solo de un simbolo" <<endl;
  for(int i=0;i<nalfabeto;i++)
  {
    cin>>abc[i];
  }
  imprimiralfabeto(abc,nalfabeto);
  return 0;

}
