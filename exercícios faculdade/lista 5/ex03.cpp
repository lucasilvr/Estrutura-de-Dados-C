/*
Faça um programa interativo, que peça ao usuário para digitar números inteiros e estes números serão utilizados para preencher uma matriz A (4x4).
Identifique qual foi o maior número digitado e mostre-o na tela do computador. 
Identifique qual foi o menor número digitado e mostre-o na tela do computador.
*/

#include <stdio.h>

int main(){
	
	int A[4][4], maior =0, menor=0, i, j;

	for (i= 0; i<4; i++){
		for (j = 0; j<4; j++){
			printf("Digite um numero inteiro [%d][%d]: ", i,j);
			scanf("%d", &A[i][j]);
			
			if (A[i][j] > maior) {
				maior = A[i][j];	
			}
			
			if (A[i][j] < menor) {
				menor = A[i][j];
			}
		}
	}
	
	printf("\nMaior numero digitado: %d", maior);
	printf("\nMenor numero digitado: %d", menor);
	
	return 0;
}
