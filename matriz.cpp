#include <iostream>
#include<cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int mat[5][5];
	int mat2[5][5];
	int mat3[5][5];
	for(int fila=0;fila<5;fila++){
		for(int col=0;col<5;col++){	
			if(fila==col || fila%2==0 && col%2==0 || fila%2==1 && col%2==1)
			 {
				mat3[fila][col]=0
		     }
		     else{
			 mat3[fila][col]=1;
		 	}
		}
	 }
	  for(int fila=0;fila<5;fila++){
		for(int col=0;col<5;col++){	
	 cout<<mat3[fila][col]<<"\t";
     }
	 cout<<endl;
}
	system ("pause");
}
