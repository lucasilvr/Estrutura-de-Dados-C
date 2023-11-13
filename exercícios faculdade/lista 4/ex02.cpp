// Um programa pra multiplicar valores usando vetores

#include <stdio.h>

int main(){
	
	int vetor_1[2];
	vetor_1[0] = 5;
	vetor_1[1] = 7;

	int vetor_2[2];
	vetor_2[0] = 6;
	vetor_2[1] = 8;
	
	int resultado[4];
	resultado[0] = vetor_1[0] * vetor_2[0];
	resultado[1] = vetor_1[0] * vetor_2[1];
	resultado[2] = vetor_1[1] * vetor_2[0];
	resultado[3] = vetor_1[1] * vetor_2[1];
	
	printf("%d %d %d %d", resultado[0], resultado[1], resultado[2], resultado[3]);

	return 0;
}
