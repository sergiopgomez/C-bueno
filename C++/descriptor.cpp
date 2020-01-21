#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    int a;
    int *pa; // el astericos de delante significa que va a guardar el numero hexagesimal donde vive otra variable
    int salir;
    int numeros[5];
    a=2;
    numeros[0]=9;
    numeros[1]=8;
    numeros[2]=7;
    //pa=&a; //pointer (puntero) es una variable que contiene una direccion de otra variable 
    printf("El numero a=%d y esta almacenado en %X",a,&a);  //&a= posicion de la memoria donde almaceno la variable a 
    printf("\nLa variable pa es un puntero pa=%X",pa);
    printf("numeros[0]=%d",numeros[0]);
    printf("\nnumeros[1]=%d",numeros[1]);
    printf("\nnumeros[2]=%d",numeros[2]);
    printf("\nnumeros[3]=%d",numeros[3]); //sale un numero cualquiera es random because is not defined
    printf("\nnumeros=%d",*(numeros+1));
    cin>> salir;
}    
