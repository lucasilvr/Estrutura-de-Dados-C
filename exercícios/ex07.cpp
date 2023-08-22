#include <stdio.h>

int media(double v1, double v2);

int main(){
	double av1, av2;
	printf("Insira o valor da av1: ");
	scanf("%lf", &av1);
	printf("Insira o valor da av2: ");
	scanf("%lf", &av2);
	double resultado = media(av1, av2);
	if (resultado >= 7.0){
		printf("%.1lf", resultado);
		printf("\nAprovado");
	}
	else{
		printf("%.1lf", resultado);
		printf("\nReprovado");
	}
}

int media(double v1, double v2){
	return (v1+v2)/2;
}


