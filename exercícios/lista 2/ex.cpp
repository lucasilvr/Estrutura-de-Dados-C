#include <stdio.h>

int fatorial(int);


int main(){
	
	int num;
	int result;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	result = fatorial(num);
	
	printf("O fatorial de %d e igual a %d", num, result);
	
	return 0;
}

int fatorial(int num){
	int result = 1;
	for (num; num>0; num-- ){
		result = result * num;
	} 

	return result;
}



int main(){
	int numero;
	int resultado;
	printf()


