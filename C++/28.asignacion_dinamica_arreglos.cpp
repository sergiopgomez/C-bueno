/* Asignacion dinamica de arreglos
new: Reserva el numero de bytes solicitados
delete: libera un bloque de bytes reservada

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en en un arreglo dunamico
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>// funciona new y delete
using namespace std;
//prototipo de funcion
void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
	pedirNotas();
	mostrarNotas();
	delete[] calif; // liberando el espacio en bytes no usado 
	getch();
	return 0;
	
}


void pedirNotas(){
	cout<< "digite el numero de calificaciones: ";
	cin>>numCalif;
	
	calif= new int[numCalif];//crear el arreglo 
	for (int i=0;i<numCalif;i++){
		cout<<"ingrese una nota ";
		cin>>calif[i];
	}
	
	
}
void mostrarNotas(){
	cout<<"\nMostrando notas del usuario:\n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
		
	}
}
