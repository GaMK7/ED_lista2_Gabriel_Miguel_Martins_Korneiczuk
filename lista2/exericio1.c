#include <stdio.h>

int main(){
	int lista[3][3], impares = 0;
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			printf("Digite um numero: \n");
			scanf("%d", &lista[i][j]);
			
			if(lista[i][j] % 2 != 0){
				impares += lista[i][j];
			}
		}
	}
	
	for(int i = 0; i < 3; ++i){
		printf("\n");
		for(int j = 0; j < 3; ++j){
			printf("[%d] ", lista[i][j]);
		}
	}
	
	printf("\nSoma dos elementos impares da matriz: %d", impares);
	
	return 0;
}
