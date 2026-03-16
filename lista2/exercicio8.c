#include <stdio.h>

int main(){
	int lista[4][4];
	
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
	
	
	printf("Elementos da diagonal principal da matriz: [%d] [%d] [%d] [%d] [%d] [%d]", lista[1][0], lista[2][0], lista[2][1], lista[3][0],lista[3][1],lista[3][2]);
	
	return 0;
}
