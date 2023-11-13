/* 
Faça um programa em Linguagem C que atenda aos seguintes requisitos:
1) Peça ao usuário para digitar um número N;
2) Faça uma função que calcule a soma dos números de 1 a N, de forma recursiva;
3) Mostre o resultado da soma na tela do computador. 
*/

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
