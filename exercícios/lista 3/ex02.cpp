#include <stdio.h>

int soma(int);

int main(){
	int num;
	int resultado;
	printf("Digite um numero: ");
	scanf("%d", &num);
	resultado = soma(num);
	printf("O resultado da soma: %d", resultado);
}

int soma(int n){
	int res;
	if (n == 0) {
		return 0;
	}
	else {
		return n + soma(n-1);
	}
}
