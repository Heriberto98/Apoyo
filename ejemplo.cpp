#include<stdio.h>
#include <stdlib.h>

using namespace std;

int F1(int x){
	int resultado = ((2*x-1) * (2*x-1));
	
	printf("Evaluando x=%i en la funcion (2x-1)^2 obtenemos ----> %i\n\n", x, resultado);
	
	return resultado;
}

int main(){
	int menu = 0, x = 0;
	int matriz[3][3];
	
	while(true){
		printf("MENU\n----------------\n1. Evaluar funcion 1\n2. Mostrar matriz\n3. Salir\n----------------\nSelecciona una opcion del menu: ");
		scanf("%i", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("La siguiente ecuacion se evaluara 9 veces\n--------------------------------------------\n");
				printf("Ecuacion a evaluar: (2x-1)^2\n\n");
				for(int i = 0; i < 3; i++){
					for(int j = 0; j < 3; j++){
						printf("Ingresa un valor para x: ");
						scanf("%i", &x);
						matriz[i][j] = F1(x);
					}				
				}
				break;
			case 2:
				system("cls");
				printf("Los valores almacenados en la matriz son: \n\n");
				for(int i = 0; i < 3; i++){
					for(int j = 0; j < 3; j++){
						printf("%i, ", matriz[i][j]);
					}
					printf("\n");
				}
				printf("------------------------------------\n\n\n");
				break;
			case 3:
				exit(0);
			default:
				printf("Este codigo no es valido intenta de nuevo");
			
		}	
	}
	
	return 0;
}
