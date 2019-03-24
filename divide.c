#include <stdio.h>
int divide(int num1, int num2);
int main(){
	int a,b,c;
	printf("Introduzca un número: \n");
	scanf("%d",&a);
	printf("Introduzca otro número: \n");
	scanf("%d",&b);
	
	c=divide(a,b);
	printf("El resultado de la operación es: %d \n",c);
}

int divide(int num1, int num2){
	int res=0;
	while(num1>=num2){
	num1=num1-num2;
	res++;
	}
	return res;
}
			
