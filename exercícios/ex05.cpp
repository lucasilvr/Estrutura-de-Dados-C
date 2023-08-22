//Uma  função que faça a soma de três números inteiros

#include <stdio.h>

int soma(int n1, int n2, int n3);

int main(){
	int num_1, num_2, num_3, resultado;
	printf("Digite um numero: ");
	scanf("%d", &num_1);
	printf("Digite um numero: ");
	scanf("%d", &num_2);
	printf("Digite um numero: ");
	scanf("%d", &num_3);
	
	resultado = soma(num_1, num_2, num_3);
	printf("A soma dos tres numeros: %d", resultado);
}

int soma(int n1, int n2, int n3){
	return n1 + n2 + n3;
	
}
