/* Transmision de direcciones

Ejemplo: Intercambiar el valor de 2 variables. */

#include<iostream>
#include<conio.h>
using namespace std;
void intercambio(float *,float *);//Prototipo
int main(){
	float num1= 20.8, num2=6.798;
	cout<<"primer numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;
	
	intercambio(&num1,&num2); // llamada a la funcion intercambio
	
	cout<<"\n\nDespues del intercambio: \n";
	cout<< "El nuevo valor de num1: "<<num1<<endl;
	cout<< "El nuevi valor de num2: "<<num2<<endl;	
	
	getch();
	return 0;
}
void intercambio(float *dirNm1, float *dirNm2){
	float aux;
	
	//intercambiar valores de los punteros
	aux=*dirNm1;
	*dirNm1=*dirNm2;
	*dirNm2=aux;
	
}

