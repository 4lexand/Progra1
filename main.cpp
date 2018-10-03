//Programa hecho: Edwin Alexander Benitez Granados//
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main() {
	float a,b,c;
	float p,at;
	
	cout <<"ingrese el valor del lado a:";cin>>a;
	cout<<"ingrese el valor del lado b:";cin>>b;
	cout<<"ingrese el valor del lado c:";cin>>c;
	p=(a+b+c)/2.0;
	at=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"El area del triangulo es: "<< at <<endl;
	getch();

}
