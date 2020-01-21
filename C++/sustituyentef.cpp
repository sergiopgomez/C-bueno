#include<iostream>
#include"funcion1.h"  
using namespace std;

int main(){
    char palabra[10]; 
    char vocales[]={'a','e','i','o','u'};                                         
    char salir;
    int cont,nvocales;
    cout <<"Dime una palabra: ";
    cin >>palabra;
    for (cont=0; cont<devuelve_longitud(palabra);cont++){
              for(nvocales=0;nvocales<5;nvocales++){
                   if (palabra[cont]==vocales[nvocales]){
                       palabra[cont]='u';           
                       }
                   } 
    }
    cout<<"Palabra troleada: "<<palabra;
    cin >> salir;
}
