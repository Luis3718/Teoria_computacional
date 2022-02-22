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
  int nalfabeto,potencia;
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
  cout<<"\nA que potencia desea elevar el alfabeto: ";
  cin>>potencia;
  int res,res2;
  res=pow(nalfabeto,potencia);
  res2=res*nalfabeto;
  cout<<"La nueva longitud es: " <<res2 <<endl;
  char alfabetopot[res2];
  for(int i=0;i<res2;i++) //4
  //aqui situamos el indice del alfabeto potenciado
  {
    for(int j=0;j<algo;j++)
    {

    }
  }
  imprimiralfabeto(alfabetopot,res2);
  return 0;
}
