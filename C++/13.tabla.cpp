#include<iostream>

int main(){
    //definicion de variables
    int ntabla;
    char salir;
    int cont;
    std::cout <<"que tabla deseas que muestre: ";
    std::cin >> ntabla;
    std::cout <<"*************************";
    std::cout <<"*TABLA DEL ";
    std::cout << ntabla;
    std::cout <<"*************************\n";
    for(cont=0;cont<=10;cont++){
                                std::cout << ntabla;
                                std::cout << " x ";
                                std::cout << cont;
                                std::cout << " = ";
                                std::cout << ntabla*cont;
                                std::cout <<"\n";
                                }
                                
                                
                                
                                
    //cont++= cont+1                                 
          
    
    std::cin >> salir;

}
