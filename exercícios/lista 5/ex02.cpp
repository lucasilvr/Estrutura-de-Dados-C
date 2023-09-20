//Faça um programa interativo, que peça ao usuário para digitar números inteiros e estes números serão utilizados para preencher a matriz 

#include <stdio.h>

int main(){

	int matriz[2][2];
	int i, j;
	
	for (i=0; i<2; i++){
			for (j=0; j<2; j++){
		    	printf("\nDigite um numero inteiro [%d][%d]: ", i, j);
		    	scanf("%d", &matriz[i][j]);
		}
	}
	printf("\nMATRIZ");
	printf("\n%d   %d", matriz[0][0], matriz[0][1]);
	printf("\n%d   %d", matriz[1][0], matriz[1][1]);

	return 0;
	}
