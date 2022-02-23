/*
  Instituto Politécnico Nacional
  ESCOM
  Alvarado Romero Luis Manuel
  Materia:Teoria de la computacion
  Grupo: 4CV5
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;
/*
int llenarlenguaje(char lenguaje[100][100],int longitud)
{
  char palabra[20];
  for(int i=0;i<longitud;i++)
  {
    cout<<"Ingresa las palabras del primer lenguaje: " <<endl;
    cin.getline(palabra,20,'\n');
    fflush(stdin);
    strcpy(lenguaje[i],palabra);
  }
  return 0;
}

int imprimirlenguaje(char lenguaje[100][100],int longitud)
{
  for(int i=0;i<longitud;i++)
  {
    cout<<lenguaje[i];
    if(i<longitud-1)
    {
      cout<<", ";
    }
  }
  return 0;
}
*/

int main ()
{
  int lon1,lon2;
  cout<<"Hola cuantas palabras tiene el lenguaje 1" <<endl;
  cin>>lon1;
  fflush(stdin);
  char l1[lon1][50];
  char palabra[50];
  for(int i=0;i<lon1;i++)
  {
    cout<<"Ingresa las palabras del lenguaje: " <<endl;
    cin.getline(palabra,50,'\n');
    fflush(stdin);
    strcpy(l1[i],palabra);
  }
  cout<<"L1= {";
  for(int i=0;i<lon1;i++)
  {
    cout<<l1[i];
    if(i<lon1-1)
    {
      cout<<", ";
    }
  }
  cout<<"}" <<endl;
  cout<<"Hola cuantas palabras tiene el lenguaje 2" <<endl;
  cin>>lon2;
  fflush(stdin);
  char l2[lon2][50];
  for(int i=0;i<lon2;i++)
  {
    cout<<"Ingresa las palabras del lenguaje: " <<endl;
    cin.getline(palabra,50,'\n');
    fflush(stdin);
    strcpy(l2[i],palabra);
  }
  cout<<"L2= {";
  for(int i=0;i<lon2;i++)
  {
    cout<<l2[i];
    if(i<lon2-1)
    {
      cout<<", ";
    }
  }
  cout<<"}" <<endl;
  cout<<"La union de L1 y L2 es: " <<endl;
  char l3[lon1+lon2][20];
  int k=0;
  for(int i=0;i<lon1;i++)
  {
    strcpy(l3[i],l1[i]);
  }
  for(int j=0;j<lon2;j++)
  {
    strcpy(l3[j+lon1],l2[j]);
  }
  cout<<"L1UL2= {";
  for(int i=0;i<lon1+lon2;i++)
  {
    cout<<l3[i];
    if(i<(lon1+lon2)-1)
    {
      cout<<", ";
    }
  }
  cout<<"}" <<endl;
  cout<<"La concatenacion de L1 con L2 es: " <<endl;
  int r=lon1*lon2;
  char l5[r][50];
  char palabras[50];
  char vacio[]="";
  int o=0;
  for(int i=0;i<lon1;i++)
  {
    for(int j=0;j<lon2;j++)
    {
      strcpy(palabras,l1[i]);
      strcat(palabras,l2[j]);
      strcpy(l5[o],palabras);
      strcpy(palabras,vacio);
      o++;
    }
  }
  cout<<"L1*L2= {";
  for(int i=0;i<r;i++)
  {
    cout<<l5[i];
    if(i<(r)-1)
    {
      cout<<", ";
    }
  }
  cout<<"}" <<endl;
  int pot;
  //hasta ahora solo sirve para potencias 2
  cout<<"Ingrese la potencia del lenguaje" <<endl;
  cin>>pot;
  int res=pow(lon1,pot);
  cout<<res <<endl;
  char l4[pot][50];
  //for(int i=0;i<res;i++)
  //{
  o=0;
  for(int j=0;j<lon1;j++)
  {
    for(int k=0;k<lon1;k++)
    {
      strcpy(palabras,l1[j]);
      strcat(palabras,l1[k]);
      strcpy(l4[o],palabras);
      strcpy(palabras,vacio);
      o++;
    }
  }
  //}
  cout<<"L4= {";
  for(int i=0;i<res;i++)
  {
    cout<<l4[i];
    if(i<(res)-1)
    {
      cout<<", ";
    }
  }
  cout<<"}" <<endl;
  return 0;
}
