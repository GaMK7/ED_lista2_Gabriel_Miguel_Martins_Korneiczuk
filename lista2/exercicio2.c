#include <stdio.h>

int main(){
	int lista[4][4], soma;
	
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j){
			printf("Digite um numero: ");
			scanf("%d", &lista[i][j]);
		}
	}
	
	for(int i = 0; i < 4; ++i){
		printf("\n");
		for(int j = 0; j < 4; ++j){
			printf("[%d] ", lista[i][j]);
		}
	}
	
	for(int j = 0; j < 4; ++j){
		soma = 0;
		for(int i = 0; i < 4; ++i){
			soma += lista[i][j];
		}
		printf("\nColuna %d, soma = %d", j, soma);
	}
	
	return 0;
	
}
