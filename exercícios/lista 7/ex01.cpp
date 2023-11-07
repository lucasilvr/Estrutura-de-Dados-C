//Um programa que tenha uma estrutura que peça nome de um aluno, e as notas da AV1, AV2 e AV3 dele
#include <stdio.h>

int main(){
	
	struct alunos {
		char nome[70];
		float AV1;	
		float AV2;
		float AV3;
	};

	typedef struct alunos alu;
	alu a1;
	printf("\nDigite o nome do aluno: ");
	scanf("%s", &a1.nome);
	printf("\nDigite a nota da AV1 dele: ");
	scanf("%f", &a1.AV1);
	printf("\nDigite a nota da AV2 dele: ");
	scanf("%f", &a1.AV2);
	printf("\nDigite a nota da AV3 dele: ");
	scanf("%f", &a1.AV3);

	printf("\nO Aluno %s tem notas: AV1 = %.1f, AV2 = %.1f, AV3 = %.1f", a1.nome, a1.AV1, a1.AV2, a1.AV3);
	
	return 0;
}
