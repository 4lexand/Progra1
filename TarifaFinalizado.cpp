#include <iostream>//Librerias de entrada y salida de datos
#include<cstdlib>//libreria prototipos de funciones de C para gestión de memoria dinámica
#include<math.h>//libreria con operaciones matematicas
//PROGRAMA HECHO POR EDWIN ALEXANDER BENITEZ GRANADOS
//CALCULO DE TARIFAS 
using namespace std;
void limp()
{
	system ("cls");//Utilizacion de funcion system "cls" 
}
void pau()
{
	system ("pause");//Utilizacion de funcion system "pause"
}
int main() {//Declaracion de variables
	float min;//variable tipo flotante
	float tot1;//variable tipo flotante
	float tot2;//variable tipo flotante
	float tot3;//variable tipo flotante
	float total2;//variable tipo flotante
	
	cout<<"Pograma para calcular tarfia de telefonica"<<endl;
	pau();
	limp();
	
do{
	cout<<"Ingrese la cantidad de minutos que ha utilizado: "<<endl;
	cin>>min;//recepcion de datos
 }while(min<=0);//validacion de numero valido mediante do while
	
 	 if (min>=0&&min<=10){//tarifa respectivas si 1-10min
		tot1 = min*0.05;
		cout<<"Su tarifa sera de: $";
		cout<<tot1<<endl;
 }
	 else if(min>10&&min<=15){//tarifa respectiva de 10-15min
		tot2 = 0.50+((min-10)*0.08);
		cout<<"Su tarifa sera de: $";
		cout<<tot2<<endl;
}
	  else if (min>15){//tarifa respectiva de 15+min
		tot3 = (0.5+0.4)+(min-15)*0.10;
		cout<<"Su tarifa sera de: $";
		cout<<tot3<<endl;
		
}
return 0;
}
