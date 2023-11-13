//Um vetor que tenha tantos dados e tilize a estrutura de repetição for e calcule a soma de todos os elementos do vetor

#include <stdio.h>

int main(){
	
	int vetor[10] = {8, -7, 45, 32, -9, 28, 75, 96, -7, -5};
	int resultado;
	int i;
	
	for(i = 0; i<=9; i++){
		resultado = resultado + vetor[i];
	}
	printf("%d", resultado);
	return 0;
}
