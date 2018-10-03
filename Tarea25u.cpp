#include <iostream> //Librerias de entrada y salida de datos
#include <cstdlib> ///libreria prototipos de funciones de C para gestión de memoria dinámica
#include <math.h> //libreria con operaciones matematicas
//PROGRAMA HECHO POR EDWIN ALEXANDER BENITEZ GRANADOS
//CALCULO DE AZUCARES Y AGUA EN BEBIDAS
using namespace std; 
void limp()
{
	system ("cls");
}
void pau()
{
	system ("pause");
}
int main(int argc, char** argv) {
	system ("Color 1F");
//Declaracion de variables enteros y caracteres
	int soda;//Variable de tipo entero
	int jugo;//Variable de tipo entero
	int sl;//Variable de tipo entero
	char sug; //Variable tipo char para sugerencias del programa
	int sg;//Variable de tipo entero
	int jl;//Variable de tipo entero
	int jg;//Variable de tipo entero
	
cout<<"Programa Para calcular el agua y azucar de las bebidas"<<endl;
pau();//Funcion que realiza el programa 
limp();
do{//validacion de numero valido mediante do while
	cout<<"Ingrese la cantidad de sodas fabricadas el dia de hoy: "<<endl;
	cin>>soda;//recepcion de datos
}while(soda<0);

while(soda<0);
	sl=(soda*600);//operacionalizacion de variables
	sg=(soda*700);
	cout<<"La cantidad de mL que tendra la soda sera de: "<<endl
	<<sl<<endl;
	cout<<"La cantidad de Azucar que tendra la soda sera de: "<<endl
	<<sg<<endl;
	pau();
	limp();
	

	do{//validacion de numero valido mediante do while
	cout<<"Ingrese la cantidad de jugos fabricados el dia de hoy: "<<endl;
	cin>>jugo;//recepcion de datos
 } while(jugo<0);

while(jugo<0);
	jl=(jugo*500);//operacionalizacion de variables
	jg=(jugo*800);
	cout<<"La cantidad de agua que tendra el juego sera de: "<<endl
	<<jl<<endl;
	cout<<"La cantidad de Azucar que tendra el jugo sera de: "<<endl
	<<jg<<endl;
	pau();
	limp();
	cout<<"¿Sugerencias?:"<<endl;
	cin>>sug;
	cout<<"Lo tendremos en cuenta, Gracias.";
	
	return 0;
}
