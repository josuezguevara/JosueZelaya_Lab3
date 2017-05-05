#include <iostream>
#include <cmath>
using namespace std;

//funciones
int binario(int);

int main(){
 bool salir=false;
 while( !salir){
  cout<<"Menu"<<endl;
  cout<<"1. Ejercicio 1"<<endl
  <<"2. Ejercicio 2"<<endl<<
  "3. Salir"<<endl;
  cout<<"Ingrese opcion: "<<endl;
  int opcion;
  cin>>opcion;
  switch (opcion){
   case 1:{
    int num;
    do{
    cout<<"Ingrese el numero: "<<endl;
    cin>>num;
    cout<<"b: "<<binario(num)<<endl;
    /*if (n<0){
     
    }*/
    
    }while(num<0);
    break;
   }
   case 2:{
    cout<<"entro"<<endl;
   break;
   }
   case 3:{
    salir=true;
    break;
   }

  }//fin switch
 }//fin while
 return 0;
}//fin main

//funcion de pasar de numero a biario
int binario(int num){
 int bin=0;
 int cont=0;
 int tmp;

 while(num!=0){
  tmp=num % 2;
  num= num/2;
  bin= bin + tmp * pow(10, cont);
  cont +=1;

 }//fin while
 return bin;
}//fin funcion binario


