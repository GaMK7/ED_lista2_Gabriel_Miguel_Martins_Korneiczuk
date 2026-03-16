#include <stdio.h>

int main(){
	int lista[3][3], maior, menor, verificar;
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			printf("Digite um numero: ");
			scanf("%d", &lista[i][j]);
		}
	}
	
	for(int i = 0; i < 3; ++i){
		printf("\n");
		for(int j = 0; j < 3; ++j){
			printf("[%d] ", lista[i][j]);
		}
	}
	
	maior = lista[0][0];
	menor = lista[0][0];
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			if(lista[i][j] < menor){
				menor = lista[i][j];
			}
			
			if(lista[i][j] > maior){
				maior = lista[i][j];
			}
		}
	}
	
	printf("\nMaior elemento %d", maior);
	printf("\nMenor elemento %d", menor);
	
	return 0;
}
