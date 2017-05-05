#include <iostream>
#include <cmath>
using namespace std;

//funciones
int binario(int);
bool malvado(int);
int** crearMatriz(int);
void liberarMatriz(int, int**);

int main(){
 bool salir=false;
 while( !salir){
  cout<<"--------Menu---------"<<endl;
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
     if (num<0){
      cout<<"Ingrese un numero mayor que 0"<<endl;
     }
     cout<<"Los numeros malvados son: "<<endl;
     int bin;//binario de un numero
     for (int i=0;i<=num;i++){
      bin= binario(i);//pasa a binario el numero
      if (malvado(bin)){//verifica si el numero es malvado
       if(i==0){
       cout<<0;
       }else{
        cout<<", "<<i;
       }
      }
     }
     cout<<endl;
    }while(num<0);
    break;
   }
   case 2:{

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

//funcion si es malvado
bool malvado(int n){
 int b=0,suma=0;
 while(n!=0) {
  b=n%10;
  n=n/10;
 //return b;
  suma+=b;
 }
 if (suma%2!=0){
  return false;
 }else{
  return true;
 }
}

//crear matriz
int** crearMatriz(int n){
 int** retVal=new int*[n];
 for(int i=0;i<n;i++)
  retVal[i]=new int[n];

return retVal;
}//fin crear matriz

//liberar memoria
void liberarMatriz(int n, int** matriz){
 for(int i=0;i<n;i++)
  delete[] matriz[i];

 delete[] matriz;
}//termina liberar
