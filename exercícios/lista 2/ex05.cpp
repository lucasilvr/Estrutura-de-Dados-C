//Faça um código que utilize uma função para calcular o fatorial de um número digitado pelo usuário e mostrar o resultado na tela

#include <stdio.h>

int fatorial(int num);

int main(){
	
	int num, result;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	result = fatorial(num);
	printf("o fatorial de %d e igual a %d", num, result);
}

int fatorial(int num){
	int i = 1;
	int valor = 1;
	for (i; i<= num; i++){
		valor = valor * i;
	}
	
	return valor;
}
