#include<iostream>
int main (){
    // Definición de variables
    char salir;
    char respuesta;
    std::cout <<"Hola mundo, mi primer programa \n ";
    std::cout << "Eres guapo? (s/n)";
    std::cin>> respuesta;
    // && significa and
    //|| significa or 
    if(respuesta == 's' || respuesta == 'S'){
                 std::cout <<"Hola guapo";
    
    }
    else{
         std::cout <<"hola feo";
         }
    std::cin>> salir;
    
    
}
