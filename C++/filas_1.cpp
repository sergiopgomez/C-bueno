#include<iostream>
/* Vamos a hacer un programa que nos pida 4 numeros y los guarde para calcular la media*/  /*memoria dinamica*/

int main(){
    char salir;
    int num[4];
    int cont;
    float  suma_numero;
    float media;
    for(cont=0;cont<=3;cont++){
          std::cout<< "introduzca el numero: ",cont,":";
          std::cin>> num[cont];
          }
    //calculamos la media
    std::cout<<" MEDIA\n";
    suma_numero=0;
    for(cont=0;cont<=3;cont++){
                               suma_numero=suma_numero+num[cont]; //Suma acumulada
                               }
    std::cout<<" La suma vale: ";
    std::cout<<suma_numero;
    media=suma_numero/cont;
    std::cout<< " La media vale: \n";
    std::cout<< media; 
//  Mostramos la lista en orden inverso
    for(cont=3;cont>=0;cont--){
                              std::cout<<num[cont];
                              }  
    std::cin >> salir;
}
    
 
