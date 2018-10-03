#include <iostream>
#include<cstdlib>
#include<math.h>

using namespace std;
void limp()
{
	system ("cls");
}
void pau()
{
	system ("pause");
}
int main() {
	float min;
	float tot1;
	float tot2;
	float tot3;
	float total2;
	
	cout<<"Pograma para calcular tarfia de telefonica"<<endl;
	pau();
	limp();
	
do{
	cout<<"Ingrese la cantidad de minutos que ha utilizado: "<<endl;
	cin>>min;
 }while(min<=0);
	
 	 if (min>=0&&min<=10){
		tot1 = min*0.05;
		cout<<"Su tarifa sera de: $";
		cout<<tot1<<endl;
 }
	 else if(min>10&&min<=15){
		tot2 = 0.50+((min-10)*0.08);
		cout<<"Su tarifa sera de: $";
		cout<<tot2<<endl;
}
	  else if (min>15){
		tot3 = (0.5+0.4)+(min-15)*0.10;
		cout<<"Su tarifa sera de: $";
		cout<<tot3<<endl;
		
}
return 0;
}
