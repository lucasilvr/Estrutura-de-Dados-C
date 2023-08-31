//Um programa que tenha duas funções: uma pra somar e uma pra subtrair
#include <stdio.h>

int soma (int n1, int n2);
int subtracao (int n1, int n2);

int main (){
	int num_1, num_2;
	printf("Insira um numero: ");
	scanf("%d", &num_1);
	printf("Insira um numero: ");
	scanf("%d", &num_2);

	int res_soma = soma(num_1, num_2);
	printf("A soma entre os numeros: %d", res_soma);
	int	res_sub = subtracao(num_1, num_2);
	printf("\nA subtracao entre os numeros: %d", res_sub);
}

int soma(int n1, int n2){
	return n1 + n2;
}

int subtracao(int n1, int n2){
	return n1 	- n2;
}
