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
	
	
	printf("Elementos da diagonal principal da matriz: [%d] [%d] [%d] [%d] [%d] [%d]", lista[0][1], lista[0][2], lista[0][3], lista[1][2],lista[1][3],lista[2][3]);
	
	return 0;
}
