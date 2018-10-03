#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void pedirNumero();
float sumar(float x,float y );

int main() {
	 pedirNumero();
	 system ("pause");
	return 0;
}
float sumar(float x,float y )
{
	return x + y;
}

 void pedirNumero()
{
float x; 
float y;
float res; 
cout<<"Ingrese un numero"<<endl;
cin>>x;
cout<<"Ingrese un numero"<<endl;
cin>>y;
res=sumar(x,y);
cout<<"El resultado de sumar: "<<res<<endl;
}

//posicion de memoria x 0x28fee8 ,  y 0x28fee4
