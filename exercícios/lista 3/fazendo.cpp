#include <stdio.h>

int fibo(int);

int main(){
	
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	fibo(num);
}

int fibo (int num){
	int i = 1;
	int result = 1;
	printf("0, 1, ");
	for(i; i<=num; i++) {
		result++;
		printf("%d,\t", result);
		
	}

	return result; 
}
