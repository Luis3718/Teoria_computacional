#include <iostream>
#include <string.h>
using namespace std;
int llenarpalabra(char w[], int lw)
{
  for(int i=0;i<lw;i++)
  {
    cin>>w[i];
  }
  return 0;
}

int imprimirpalabra(char w[], int lw)
{
  for(int i=0;i<lw;i++)
  {
    cout<<w[i];
  }
  cout<<endl;
  return 0;
}

int validar(char w[],char alfabeto[],int lw,int labc)
{
  int comprobacion;
  for(int i=0;i<lw;i++)
  {
    comprobacion=0;
    for(int k=0;k<labc;k++)
    {
      if(w[i]==alfabeto[k])
      {
        comprobacion=1;
        break;
      }
    }
    if(comprobacion==0)
    {
      cout<<"La palabra no cuenta con simbolos del alfabeto" <<endl;
      return false;
      break;
    }
  }
  comprobacion=1;
  return true;
}

int concatenar(char w1[], char w2[], int lw1, int lw2)
{
    int total=lw1+lw2;
    char w3[total];
    for(int i=0;i<lw1;i++)
    {
      w3[i]=w1[i];
    }
    for(int j=0;j<lw2;j++)
    {
      w3[j+lw1]=w2[j];
    }
    for(int k=0;k<lw1+lw2;k++)
    {
      cout<<w3[k];
    }
    cout<<endl;
    return 0;
}

int longitud(char w2[])
{
  cout<<"La longitud de w2 es: " <<strlen(w2) <<endl;
  return 0;
}

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
  llenarpalabra(w1,lw1);
  //mostramos la palabra
  cout<<"La palabra 1 es: ";
  imprimirpalabra(w1,lw1);
  //comprobacion de la palabra 1
  if(validar(w1,abc,lw1,labc)==false)
  {
    return 0;
  }
  cout<<"De cuanta longitud es la palabra 2" <<endl;
  cin>>lw2;
  char w2[lw2];
  //llenamos la palabra 2
  llenarpalabra(w2,lw2);
  //mostramos la palabra 2
  cout<<"La palabra 2 es: ";
  imprimirpalabra(w2,lw2);
  //evaluamos la palabra 2
  if(validar(w2,abc,lw2,labc)==false)
  {
    return 0;
  }
  cout<<"La concatenacion de la cadena w1 y la cadena w2 es: " <<endl;
  concatenar(w1,w2,lw1,lw2);
  longitud(w2);
}
