//Programa que pede para o usuário digitar valores dentro de uma matrriz 4x4 e identificar o maior e o menor número digitado

#include <stdio.h>

int main(){
	
	int A[4][4];
	int i = 0, j = 0;
	int menorNumero = A[0][0], maiorNumero;
	
	for(i = 0; i<4; i++){
		for (j = 0; j<4; j++){
				printf("A[%d][%d]: ", i, j);
				scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i<4; i++) {
		for (j = 0; j<4; j++) {
			if (A[i][j] < menorNumero) {
				menorNumero = A[i][j];
			}
			if (A[i][j] > maiorNumero){
				maiorNumero = A[i][j];
			}
		}
	}
	printf("maior: %d\n", maiorNumero);
	printf("menor: %d", menorNumero);
	
	return 0;
}
