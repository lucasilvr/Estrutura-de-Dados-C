//Faça um programa que utilize a estrutura de repetição for, de modo que o trecho de código mostrado abaixo seja executado por cinco vezes

#include <stdio.h>

main () {
	int i;
	char nome[20];
	int media;
	
	for (i; i<=4; i++) {
		
		printf("\nDigite o nome do aluno: ");
		scanf("%s", nome);
		printf("Digite a media final do aluno: ");
		scanf ("%d", &media);
		if (media >= 7) {
			printf("\nAprovado!\n");
		}
		else {
			printf("\nReprovado!\n");
		}
	}
}
