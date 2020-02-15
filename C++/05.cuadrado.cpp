#include<iostream>
/*vamos a hacer un programa que dibuje un bello cuadrado del tamaño que nos diga el usuario*/
int main (){
    //definicion de variables
    char salir;
    int lado,col,fil;
    std::cout<<"Dime el tamano del cuadrado: ";
    std::cin >> lado;//nested
    for (col=1;col<=lado;col++){
        for(fil=1;fil<=lado;fil++){
                                   std::cout<<'*';
                                   }
        std::cout<<'\n';
        }
    std::cin >> salir;
    }
