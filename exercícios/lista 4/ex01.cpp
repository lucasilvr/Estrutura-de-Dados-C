//Faça a média dos valores dos dados do vetor e mostre o resultado na tela

#include <stdio.h>

int main(){
	
	float vetor[3];
	vetor[0] = 9.7;
	vetor[1] = 8.4;
	vetor[2] = 7.6;
	
	float resultado = (vetor[0] + vetor[1] + vetor[2])/3;
	printf("%0.1f", resultado);
	
	return 0;
}
