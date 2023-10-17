#include <stdio.h>

int main(){
	
	//Definição de ponteiro
	
	int a = 10;
	printf("%d", a);
	int *muda = &a;
	printf("\n%d", *muda);
	*muda = 5;
	printf("\n%d", *muda);
	printf("\n%d", a);

	return 0;
	
}
