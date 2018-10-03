//Programa hecho por Edwin Alexander Benitez Granados
#include <iostream>//Libreria para entrada y salida de datos.
#include <cstdlib>//Libreria que sirve para llamar un comando del sistema.
#include <windows.h>//Libreria para las funciones de windows.
using namespace std;

char juego[3][3]; //Declaracion de la matriz donde se almacenaran los datos del juego (la letra y la posicion en que se incerto).
char letra[3] {"XO"} ; //Arreglo de un espacio que contendra la letra que se desea incertar. Es resultado de la funcion "pedirlet()". 
int pos;//Esta variable alamcena el numero de posicion donde se va a incertar la letra. Es resultado de la funcion "pedirnum".
void titulo(); //Decaracion de la funcion titulo que imprime en pantalla un encabezado del programa y las indicaciones.
void tabla2(); //Decaracion de la funcion tabla2 que imprime una tabla que sirve de referencia para las celdas del juego.
int pedirnum(); //Declaracion de la funcion donde se pide el numero de la posicion de la letra a incertar.
void result(); //Declaracion de la fucion que veifica el numero de la celda a la que desea ingresar la letra
void result2();
void sumt();
void interaccion();
void fin();

int main() {
	system("Color 0F"); //Funcion para darle color a la consola y al texto que se imprime.
	titulo(); //Se inicia el programa con la funcion titulo.
	for (int i=0; i<=2; i++)//Ciclos para imprimir vacia en forma de tabla la matriz "juego".
	{//Con el primer ciclo se recorren las columnas.
		for (int j=0; j<=2; j++)//Con el segundo ciclo se recorren las filas.
		{
			cout<<juego[i][j];
			if(j<=1){
				cout<<"	|";
			}
		}
		cout<<endl; //Salto de linea.
		if(i<=1){
			cout<<"    _________________";
		}
		cout<<endl; //Salto de linea.
	}
	for (int inc=1; inc<=4; inc++){
		interaccion();
		}
	tabla2();
	pedirnum(); //Se ejecuta la funcion "pedirnum()" la cual pide al usuario el numero de posicion donde desea incertar la letra.
	system("cls");//Comando para limpiar pantalla. Se ejecuta aqui para limpiar pantalla e imprimir los resultados de la interaccion.
	titulo();//Funcion de titulo e indicaciones que serviran para la siguiente interaccion.
	result();
	fin();
	return 0;//Valor de retorno de la funcion "main".
}
void titulo(){//Se define la funcion "titulo()". Esta funcion imprime un encabezado del programa.
	system("cls");//Comando para limpiar pantalla cada vez que se ejecuta la funcion "titulo()".
	cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*_*_*_*__"<<endl;		//
	cout<<endl;																	//
	cout<<"                  INICIANDO JUEGO (X|0)                          "<<endl;		//Texto de encabeado del programa.
	cout<<endl;																	//
	cout<<"                   JUEGA Y DIVIERTETE                   "<<endl;		//
	cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*_*_*_*__"<<endl;		//
	cout<<endl;
	cout<<"INDICACION: La tabla siguiente muestra los espacios del"<<endl;		//
	cout<<"juego que se iran reyenado conforme juegue. Basese en la"<<endl;		//Indicaciones del juego.
	cout<<"Tabla 2 para selecionr la casilla donde desea colocar la"<<endl;		//
	cout<<"letra (seleccione X o O)"<<endl;										//
	cout<<endl;
}	
void tabla2(){ //Se define la funcion "tabla2()" la que se ejecutara durante todo el juego paa que el usuario siempre
				//tenga referencia a la hora de ingresar el numero de posicion.
	cout<<"_________Tabla 2________"<<endl; //Esta funcion es utilizada para imprimir una tabla con una serie de numeros
	cout<<"   1	   2	   3"<<endl;		//del 1 al 9 que sirven de referencia para incertar el numero dependiendo la
	cout<<endl;								//celda donde se desea incertar la letra.
	cout<<"   4	   5	   6"<<endl;
	cout<<endl;
	cout<<"   7	   8	   9"<<endl;
	cout<<"________________________"<<endl;
}
int pedirnum(){//Se define la funcion "pedirnum".
				//Esta funcion se repetira durante todo el juego pidiendo al usuario que ingrese el numero con respecto
				//a la osicion donde desea poner la letra.
	do{ //Se crea un ciclo do-while para condicionar que el numero que ingrese el ususario este entre el 1 al 9 ya que
		//solo en este intervalo se encuentran el numero de casillas.
		cout<<"Introduzca la posision donde desea incertar la letra :"; //Se pide al usuario el numero.
		cin>>pos;Beep(400,400);//Se lee el numero y se almacena en la variable entera "pos".
	}while(pos<1 || pos>9);//Se condiciona  que el numero no sea menor que 1 ni mayor que 9.
	return pos; //Esta funcion retorna el valor almacenado en la variable "pos".
}
void sumt(){//Se define la funcion "sumt()" que suma la matriz "juego" que es la que almacena la letra introducida en la posicion
	//seleccionada y a la matriz "tabla" que es la matriz igualada a cero y la cual guarda la suma en la matriz "suntabla", se
	//ejecutan dos ciclos "for" para recorrer las filas y columnas de las matrices.
	for (int i=0; i<=2; i++)//En el primer ciclo se recorren las fila de las matrices.
		{
		for (int j=0; j<=2; j++)//En el segundo ciclo se recorren las columnas de las matrices.
		{
			cout<<"    "<<juego[i][j];
			if(j<=1){
				cout<<"	|";
			}
		}
		cout<<endl; //Salto de linea.
		if(i<=1){
			cout<<"    _________________";
		}
		cout<<endl; //Salto de linea.
		}
}
void result(){//Se define la funcion "result()". Esta funcion toma los valores almacenados en el areglo "letra[]" (que indica la letra
	//que se va usar) y en la variable "pos" (la cual indica el numero de posicion donde se desea poner la letra) que se evaluan en 9
	//condiciones de "if e else-if" ya que ese es el numero de posiblies casillas donde colocar la letra. En cada evaluacion dependiendo
	//de la posicion selecionada se le dan valores a dicha posicion y se ejecuta la funcion "sumt()" que imprime la matriz resultante
	//dependiendo de la condicion que se cumpla. Esta funcion sera ejecutada durante todo el juego por cada interaccion con el usuario.
	if(pos==1){//Primera condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 1.
		juego[0][0]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==2){//Segundo condicion que se va a ejecutar si la posicion donde se desea colocar la letra es  la 2.
		juego[0][1]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==3){//Tercera condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 3.
		juego[0][2]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==4){//Cuarta condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 4.
		juego[1][0]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==5){//Quinta condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 5.
		juego[1][1]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==6){//Sexta condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 6.
		juego[1][2]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==7){//Septima condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la /.
		juego[2][0]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==8){//Octava condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 8.
		juego[2][1]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==9){//Novena y ultima condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 9.
		juego[2][2]=letra[0];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
}

}
void result2(){//Se define la funcion "result()". Esta funcion toma los valores almacenados en el areglo "letra[]" (que indica la letra
	//que se va usar) y en la variable "pos" (la cual indica el numero de posicion donde se desea poner la letra) que se evaluan en 9
	//condiciones de "if e else-if" ya que ese es el numero de posiblies casillas donde colocar la letra. En cada evaluacion dependiendo
	//de la posicion selecionada se le dan valores a dicha posicion y se ejecuta la funcion "sumt()" que imprime la matriz resultante
	//dependiendo de la condicion que se cumpla. Esta funcion sera ejecutada durante todo el juego por cada interaccion con el usuario.
	if(pos==1){//Primera condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 1.
		juego[0][0]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==2){//Segundo condicion que se va a ejecutar si la posicion donde se desea colocar la letra es  la 2.
		juego[0][1]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==3){//Tercera condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 3.
		juego[0][2]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==4){//Cuarta condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 4.
		juego[1][0]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==5){//Quinta condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 5.
		juego[1][1]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==6){//Sexta condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 6.
		juego[1][2]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==7){//Septima condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la /.
		juego[2][0]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==8){//Octava condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 8.
		juego[2][1]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
	else if(pos==9){//Novena y ultima condicion que se va a ejecutar si la posicion donde se desea colocar la letra es la 9.
		juego[2][2]=letra[1];//Esta instruccion indica la posicion en la matriz donde se va almacenar la letra y almacena la letra.
		sumt();
	}
}
void interaccion(){
	tabla2();//Se ejecuta la funcion "tabla2()" para que se imprima y sirva como referencia a la hora de i gresar e numero de posicion.
	//PRIMERA INTERACION. Se piden por 1° vez la letra conque va a jugar y el numero de posicion.
	pedirnum(); //Se ejecuta la funcion "pedirnum()" la cual pide al usuario el numero de posicion donde desea incertar la letra.
	system("cls");//Comando para limpiar pantalla. Se ejecuta aqui para limpiar pantalla e imprimir los resultados de la interaccion.
	titulo();//Funcion de titulo e indicaciones que serviran para la siguiente interaccion.
	result();//Se ejecuta la funcion "result()" que conprueva la posicion done se va poner la letra e imprime el arreglo resultante.
	tabla2();//Se ejecuta la funcion "tabla2()" para que se imprima y sirva como referencia a la hora de i gresar e numero de posicion.
	//PRIMERA INTERACION. Se piden por 1° vez la letra conque va a jugar y el numero de posicion.
	pedirnum(); //Se ejecuta la funcion "pedirnum()" la cual pide al usuario el numero de posicion donde desea incertar la letra.
	system("cls");//Comando para limpiar pantalla. Se ejecuta aqui para limpiar pantalla e imprimir los resultados de la interaccion.
	titulo();//Funcion de titulo e indicaciones que serviran para la siguiente interaccion.
	result2();
}
void fin(){
	titulo();//Funcion de titulo e indicaciones.
	result();//Se ejecuta la funcion "result()" que conprueva la posicion done se va poner la letra e imprime el arreglo resultante.
	cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*_*_*_*__"<<endl;		//
	cout<<endl;																	//Se imprime el siguiente letrero al final de las
	cout<<"                      GAME FINISH                   "<<endl;		//interacciones para indicar que el juego termino.
	cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*_*_*_*__"<<endl;		//
	cout<<endl;																	//
	system("pause");//Comando para pausar el sistema.
	system("cls");//Comando para limpiar pantalla al terminar el juego.
	
	cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*_*_*_*__"<<endl;		//
	cout<<endl;																	//
	cout<<endl;																	//con los datos del programador y la vercion del juego.
	cout<<"                      VERSION 1.2                       "<<endl;		//
	cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*_*_*_*__"<<endl;		//
	system("pause");//Comando para pausar el sistema al finalizar el programa y no se cierre de una vez el programa.	
}

