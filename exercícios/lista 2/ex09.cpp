//Programa que tenha opção de calcular um numero com: seno, coseno, tangente e logaritmo de base 10

#include <stdio.h>
#include <math.h>

int main(){
	int escolha;
	float num, result;
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	printf("Digite a operacao desejada:\n1 => seno\n2 => cosseno\n3 => tangente\n4 => logaritmo (base 10)\n>> ");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			result = sin(num);
			printf("O seno de %.2f = %.2f", num, result);
			break;
		case 2:
			result = cos(num);
			printf("O cosseno de %.2f = %.2f", num, result);
			break;
		case 3:
			result = tan(num);
			printf("O tangente de %.2f =  %.2f", num, result);
			break;
		case 4:
			result = log10(num);
			printf("O logaritmo base 10 de %.2f = %.2f", num, result);
			break;
		default:
			printf("Inseriu uma operacao errada");
		}
	return 0;
}

