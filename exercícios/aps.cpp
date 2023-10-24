#include <stdio.h>

struct alunos {
	char nome[70];
	float AV1;
	float AV2;
	float AV3;
	};

typedef struct alunos Alunos;

void separar();
	
int main(){
	
	alunos Alunos[5];
	
	for (int i = 0; i<5; i++) {
		separar();
		printf("Digite o nome do Aluno: ");
		scanf("%s", &Alunos[i].nome);
		fflush(stdin);
		printf("Digite a nota da AV1: ");
		scanf("%f", &Alunos[i].AV1);
		fflush(stdin);
		printf("Digite a nota da AV2: ");
		scanf("%f", &Alunos[i].AV2);
		fflush(stdin);
		printf("Digite a nota da AV3: ");
		scanf("%f", &Alunos[i].AV3);
		fflush(stdin);
		
		
		float menorNota = Alunos[i].AV1;
		if (Alunos[i].AV2 < menorNota) {
			menorNota = Alunos[i].AV2;
		}
		
		if (Alunos[i].AV3 < menorNota) {
			menorNota = Alunos[i].AV3;
		}
		
		float media = ((Alunos[i].AV1 + Alunos[i].AV2 + Alunos[i].AV3) - menorNota)/2.0;
		
		if (media >= 7.0) {
			printf("%s tem media: %.1f e foi APROVADO!\n", Alunos[i].nome, media);
		} else {
			printf("%s tem media: %.1f e foi REPROVADO!\n", Alunos[i].nome, media);
		}
	}
	
	return 0;

	}

void separar (){
	printf("=========================\n");
	return;
}




