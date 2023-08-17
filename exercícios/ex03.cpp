#include <stdio.h>
// Faça um código para exibir os números de 10 a 1 na tela do computador, utilizando a estrutura de repetiçaõ for

main() {
	
	int i;
	int count = 10;
	printf("%d\n", count);
	
	for (i=1; i<=9; i++) {
		count = count - 1;
		printf("%d\n", count);
	}
	
}

