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
	int i, res=1;
	for(i=num1;i>=1;i--){
	res=res*i;
	}
	return res;
}
