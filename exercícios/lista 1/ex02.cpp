//Faça um código para contar o número de vezes que a letra "a" aparece em uma palavra qualquer digitada pelo usuário

#include <stdio.h>

main () {
	int i, count = 0;
	char palavra[100];
	
	printf("\nDigite uma palavra: ");
	scanf("%s", palavra);
	
	for (i; palavra[i] != '\0'; i++) {
		
		if (palavra[i] == 'a') {
			count = count + 1; 
		}
	}
	printf("O número de vezes que o caractere 'a' aparece: %d veze(s)", count);
}

