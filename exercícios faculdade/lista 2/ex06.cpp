//Programa que peça ao usuario um numero e que tenha a opção de calcular um numero ao quadrado ou ao cubo

#include <stdio.h>

int quadrado(int num);
int cubo(int num);

int main(){
	
	int numero, resp, result;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	printf("Digite 1 - calcular o quadrado do numero\nDigite 2 - calcular o cubo do numero: ");
	scanf("%d", &resp);
	
	if(resp == 1){
		result = quadrado(numero);
		printf("%d",result);
	} else{
		result = cubo(numero);
		printf("%d", result);
	}
}

int quadrado(int num){
	num *= num;
	return num; 
}

int cubo(int num){
	int result = 1;
	int i = 1;
	for (i; i<=3; i++){
		result *= num;
	}
	return result;
}
