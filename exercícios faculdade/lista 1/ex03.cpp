// Faça um código para exibir os números de 10 a 1 na tela do computador, utilizando a estrutura de repetiçaõ for e usando o decremento

#include <stdio.h>

int main() {
	int i;
	for (i=10; i>=1; i--) {
		printf("%d\n", i);
	}
}

/* Uma outra forma de montar
main() {
	int i, count = 10;
	printf("%d\n", count);
	for (i=10; i>=1; i--) {
		count = count - 1;
		printf("%d\n", count);
	}
} */

