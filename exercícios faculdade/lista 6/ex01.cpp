/*1) Peça ao usuário para digitar um número inteiro, referente à quantidade de alunos;
2) Crie um ponteiro do tipo float e aloque, dinamicamente, a quantidade de memória
indicada pelo número digitado pelo usuário;
3) Use a estrutura de repetição for para inserir as notas dos alunos na variável criada
dinamicamente;
4) Para fins didáticos, use outra estrutura de repetição for para exibir as notas dos alunos
que foram digitadas*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int qnt, i;
	printf("Digite o numero de alunos: ");
	scanf("%d", &qnt);
	fflush(stdin);
	float *notas = (float *)malloc(qnt*sizeof(float));
	
	for (i = 0; i<qnt; i++){
		printf("\nDigite a nota do aluno %d: ", i);
		scanf("%f", &notas[i]);
	}
	
	for (i = 0; i<qnt; i++){
		printf("\nnotas[%d] = %.1f", i, notas[i]);
	}
	
	free(notas);
	return 0;
}

