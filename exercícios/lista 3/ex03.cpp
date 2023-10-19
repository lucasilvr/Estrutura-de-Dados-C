//Sequência de Fibonacci

#include <stdio.h>

int fibo(int);

int main(){
	
	int num, i;
	printf("Digite a quantidade de termos que deseja para o Fibonacci: ");
	scanf("%d", &num);
	for (i = 0; i<num; i++){
		printf("%d ", fibo(i));
	}
return 0;
}



int fibo (int num){
	
	if (num == 0){
		return 0;
	}
	else if (num == 1){
		return 1;
	} else {
		return fibo(num - 1) + fibo(num - 2);
	}
		
}
