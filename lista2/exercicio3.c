#include <stdio.h>

int main(){
	float lista[3][4], soma;
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 4; ++j){
			printf("Digite um numero: ");
			scanf("%f", &lista[i][j]);
		}
	}
	
	for(int i = 0; i < 3; ++i){
		printf("\n");
		for(int j = 0; j < 4; ++j){
			printf("[%.2f] ", lista[i][j]);
		}
	}
	
	for(int i = 0; i < 3; ++i){
		soma = 0;
		for(int j = 0; j < 4; ++j){
			soma += lista[i][j];
		}
		printf("\nLinha %.2f, soma = %.2f", i, soma);
	}
	
	return 0;
	
}
