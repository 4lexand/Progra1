//Programa Hecho por: Edwin Alexander Benitez
//Programa para calcular descuento
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main() {
	cout<<"Programa para calcular descuentos en sacos de cafe"<<endl;
	cout<<" Cada saco de cafe tiene un precio de $100"<<endl;
//Declaracion de variables

	float descuento; 
	float saco;
	float vent;
	float iva;
	float sindesc;
	
//Condicionantes para descuentos de sacos
	cout<<" Porfavor ingrese la cantidad de sacos :"<<endl;	cin>> saco;
//Si los sacos son mayores a 100 y menores o iguales a 200
	if(saco>100&&saco<=200){
		vent = saco * 100;
		iva = vent * 0.13;
		sindesc = vent - iva;
		descuento = sindesc- vent*0.10;  
		
		cout<<"Su venta sera de: $"<<descuento;
		
		}
//si los sacos son mayores a 200 y menores o iguales 250	
		else if(saco>200&&saco<=250){
		vent = saco * 100;
		iva = vent * 0.13;
		sindesc = vent - iva;
		descuento = sindesc- vent*0.15; 
		
		cout<<"Su venta sera de: $"<<descuento; 
		}
//si los sacos son mayores a 250 y menores a 300
		else if(saco>250&&saco<300){
		vent = saco * 100;
		iva = vent * 0.13;
		sindesc = vent - iva;
		descuento = sindesc- vent*0.20; 
		
		cout<<"Su venta sera de: $"<<descuento; 
		}
//si los sacos son mayores o iguales a 300
		else if(saco>=300){
		vent = saco * 100;
		iva = vent * 0.13;
		sindesc = vent - iva;
		descuento = sindesc- vent*0.25; 
		
		cout<<"Su venta sera de: $"<<descuento;
		}
//Si no se cumplen las condiciones anteriores el producto no tiene descuento
	else{
		vent = saco * 100;
		iva = vent * 0.13;
		sindesc = vent - iva;
		cout<<"Su venta es inferior al rango aplicable en descuentos"<< endl;
		cout<<"La venta es de: $"<<sindesc;
	}
	return 0;
}
