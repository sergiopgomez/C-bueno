//Estructuras 3

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fpaula.h>

using namespace std;

int main (){
    char salir;
    char amigo_misamigos[3];
    
    struct amigo[1]{ // se define automaticamente
           int n_amigo1;
           float dinero1;
           };
    struct amigo[2]{ // se define automaticamente
           int n_amigo2;
           float dinero2;
           };
    struct amigo[3]{ // se define automaticamente
           int n_amigo3;
           float dinero3;
           };
    amigo imaginario; //guardo memoria para un dato de tipo amigo
    cout << "Dime tu numero: ";
    cin >> imaginario.n_amigo1; //guardar en el campo n_amigo el valor de su numero
    cout << "Dime cuanto dinero tienes: ";
    cin >> imaginario.dinero1;
    
    //Recupero los datos de mi amigo imaginario
    cout << "\nMi amigo imaginario es mi amigo numero " << imaginario.n_amigo1; //añadir variable que elija la moneda que quieras
    cout << "\nMi amigo imaginario tiene " << imaginario.dinero1 << " euros"; 
    
    cin >> salir;
}
    
