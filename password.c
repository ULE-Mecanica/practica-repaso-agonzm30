#include <stdio.h>
int main(){
	int i=2,a;
	printf("Introduzca su contraseña: \n");
	scanf("%d", &a);
	while(i>0){
		i--;
		if(a==4567){
		printf("Bienvenido al sistema \n");
		return 0;
		}
		else{
			if(a<4567){
			printf("La contraseña es incorrecta (menor), introdúzcala de nuevo: \n");
			scanf("%d", &a);
			}
			else{
			printf("La contraseña es incorrecta (mayor), introdúzcala de nuevo: \n");
			scanf("%d", &a);
			}
		}
	}
	if(a==4567){
		printf("Bienvenido al sistema \n");
		}
		else{
			if(a<4567){
			printf("La contraseña es incorrecta (menor), sistema bloqueado. \n");
			}
			else{
			printf("La contraseña es incorrecta (mayor), sistema bloqueado. \n");
			}
		}
	return 0;
}	


