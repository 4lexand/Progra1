//Programa elaborado por: Edwin Alexander Benitez Granados
//Pograma para calcular salario en base a ventas

//Librerias utilizadas
#include <iostream> //libreria para flujos de entrada y salidas de datos
#include <cstdlib> //libreria prototipos de funciones de C para gestión de memoria dinámica
#include <iomanip> //libreria provee facilidades para manipular el formateo de salida
#include <windows.h>//libreria contiene las declaraciones de todas las funciones de la biblioteca Windows API

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	system("color 1E");
	cout<<"programa para calcular salario de una empresa"<<endl;
	cout<<"Salario efectuado en base a las ventas realizadas"<<endl;
// declaracion de variables	flotantes para el caso de pagos con decimales
	float venta; 
	float sueldo;
	float porcent;
     do
     {
      cout<<" Porfavor ingrese las ventas efectuadas:"<<endl;
	  cin>> venta;
    
	 }while(venta<=0);
	
//Operacionalizacion de variables en base a las ventas efectuadas
	if (venta>0&&venta<=500000){
		sueldo = 80.000;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout<<"su sueldo sera: $"<<sueldo;Beep(500,400);Beep(500,400); 
	}
	else if (venta>500001&&venta<=1000000){
		sueldo = 160.000;
		cout<<"su sueldo sera: $"<<sueldo;Beep(500,300);Beep(500,400);
	}
	else if(venta>1000001&&venta<=1500000){
		sueldo = 320.000;
		cout<<"su sueldo sera: $"<<sueldo;Beep(500,300);Beep(500,300);
	}
	else if(venta>1500001&&venta<=2500000){
		sueldo = 450.000;
		cout<<"su sueldo sera: $"<<sueldo;Beep(500,300);Beep(500,300);

 	}
	else if(venta>2500001&&venta<=4000000){
		sueldo = 550.000;
		cout<<"su sueldo sera: $"<<sueldo;Beep(500,300);Beep(500,300);
		}
//En caso contrario que sea mas de la cantidad el programa sacara el porcentaje 
	 else{
		porcent = venta*0.2;
		sueldo = porcent;
		cout<<fixed<<setprecision(1)<<"su sueldo sera: $"<<sueldo;Beep(500,500);Beep(500,500);
	}
	return 0;
}
