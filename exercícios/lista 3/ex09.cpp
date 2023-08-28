/* 
1)	Peça ao usuário para digitar um número;
2)	Faça uma função que calcule o fatorial deste número de forma iterativa;
3)	Mostre o resultado do fatorial do número na tela do computador.
*/

#include <stdio.h>

int fatorial (int num);

int main () {
	int num;
	int resultado;
	printf("Digite um numero: ");
	scanf("%d", &num);
	resultado = fatorial(num);
	printf("O fatorial de %d: %d", num, resultado);
	
}

int fatorial(int num) { 
	int i = 1;
	int res = 1;
	
	for (i; i<= num; i++) {
		res *= i;
	}
	return res;
	}
