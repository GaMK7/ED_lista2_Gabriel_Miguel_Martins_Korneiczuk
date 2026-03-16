#include <stdio.h>

int main(){
	int lista[3][3];
	
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
	
	printf("\nElementos fora da diagonal principal da matriz: [%d] [%d] [%d] [%d] [%d] [%d]", lista[0][1], lista[0][2], lista[1][0], lista[1][2], lista[2][0], lista[2][1]);
	printf("\nElementos fora da diagonal principal da matriz: [%d] [%d] [%d] [%d] [%d] [%d]", lista[0][0], lista[0][1], lista[1][0], lista[1][2], lista[2][1], lista[2][2]);
}
