#include <iostream>
#include<conio.h>

using namespace std;


int main() {
	int fil, col;
	int matriz[30][30];
	
	cout<<"ingrese el numero de filas"; cin>>fil;
	cout<<"ingrese el numero de columnas";cin>>col;
	int matrizB[fil][col];
	
	for(int i=0; i<fil;i++){
		for(int j=0; j<col; j++){
			cout<<"ingrese dato["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];
		}
	}
for(int i=0; i<fil;i++){
		for(int j=0; j<col; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	} 
	return 0;
	getch();
}
