#include <stdio.h>
int multiplica(int num1, int num2);
int main(){
	int a,b,c;
	printf("Introduzca un número: \n");
	scanf("%d",&a);
	printf("Introduzca otro número: \n");
	scanf("%d",&b);
	
	c=multiplica(a,b);
	printf("El resultado de la operación es: %d \n",c);
}

int multiplica(int num1, int num2){
	int i, suma=0;
	for(i=0;i<num2;i++){
	suma=suma+num1;
	}
	return suma;
}
			
