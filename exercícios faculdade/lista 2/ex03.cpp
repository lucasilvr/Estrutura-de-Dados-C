//Um programa que leia duas notas, calcule a média e mostra se o aluno foi aprovado ou não

#include <stdio.h>

float media(float v1, float v2);

int main(){
	float av1, av2;
	printf("Insira o valor da av1: ");
	scanf("%f", &av1);
	printf("Insira o valor da av2: ");
	scanf("%f", &av2);
	float resultado = media(av1, av2);
	if (resultado >= 7.0){
		printf("%.1f", resultado);
		printf("\nAprovado");
	}
	else{
		printf("Media: %.1f", resultado);
		printf("\nReprovado");
	}
}

float media(float v1, float v2){
	float res;
	res = (v1+v2)/2;
	return res;
}


