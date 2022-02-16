#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
  int labc,opc,nalfabeto,lw1,lw2,rep;
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
  //ahora definimos las palabras
  cout<<"De cuanta longitud es la palabra 1" <<endl;
  cin>>lw1;
  char w1[lw1];
  //llenado de la palabra 1
  for(int i=0;i<lw1;i++)
  {
    cin>>w1[i];
  }
  //mostramos la palabra
  cout<<"La palabra uno es: ";
  for(int i=0;i<lw1;i++)
  {
    cout<<w1[i];
  }
  cout<<endl;
  /*//comprobacion de la palabra 1
  rep=0;
  for(int i=0;i<lw1;i++)
  {
    for(int k=0;k<nalfabeto;k++)
    {
      if(w1[i]!=abc[k])
      {
        rep++;
        if(rep>=nalfabeto)
        {
          cout<<"La palabra no coincide con los simbolos del alfabeo" <<endl;
          return 0;
        }
      }
    }
    rep=0;
  }
  */
  cout<<"De cuanta longitud es la palabra 2" <<endl;
  cin>>lw2;
  char w2[lw2];
  //llenamos la palabra 2
  for(int i=0;i<lw2;i++)
  {
    cin>>w2[i];
  }
  //mostramos la palabra 2
  cout<<"La palabra dos es: ";
  for(int i=0;i<lw2;i++)
  {
    cout<<w2[i];
  }
  cout<<endl;
  /*//evaluamos la palabra 2
  rep=0;
  for(int i=0;i<lw2;i++)
  {
    for(int k=0;i<nalfabeto;i++)
    {
      //cout<<"Entre";
      if(w2[i]!=abc[k])
      {
        //cout<<"Entre 1";
        rep++;
        if(rep>=nalfabeto)
        {
          cout<<"La palabra no coincide con los simbolos del alfabeo" <<endl;
          return 0;
        }
      }
    }
  }
  */
}
