#include <stdio.h>
int factorial(int num1);
int main(){
	int a,b;
	printf("Introduzca un número: \n");
	scanf("%d", &a);
	b=factorial(a);
	printf("El factorial de %d es: %d \n",a,b);
	return 0;
}

int factorial(int num1){
	int i=num1, res=1;
	while(i>=1){
	res=res*i;
	i--;
	}
	return res;
}
