#include <stdio.h>
#include <stdlib.h>

/*
Implementar rota��o esquerda e direita da �rvore AVL.
Completar o c�digo onde est� escrito /*FAZER CODIGO AQUI*/

*/

typedef struct sNoAVL {
	int chave;
	int fb;
	struct sNoAVL *esq;
	struct sNoAVL *dir;
} TNoAVL;

void imprime(TNoAVL *no, int tab) {
	for (int i = 0; i < tab; i++) {
		printf("-");
	}
	if (no != NULL) {
		printf("%d (fb = %d)\n", no->chave, no->fb);
		imprime(no->esq, tab + 2);
		printf("\n");
		imprime(no->dir, tab + 2);
	} else printf("vazio");
}

TNoAVL *rotacao_direita(TNoAVL *p) {
	//Faz rota��o de p para direita e retorna ponteiro para a nova raiz da sub�rvore afetada
	//FAZER CODIGO AQUI
	TNoAVL * u;

	u = p->esq;
	p->esq = u->dir;
	u->dir = p;
	p->fb = 0;
	p = u;
	return p;
}

TNoAVL *rotacao_esquerda(TNoAVL *p) {
	//Faz rota��o de p para esquerda e retorna ponteiro para a nova raiz da sub�rvore afetada
	//FAZER CODIGO AQUI
	TNoAVL *u;

	u = p->dir;
	p->dir = u->esq;
	u->esq = p;
	p->fb = 0;
	p = u;
	return p;
}

TNoAVL *rotacao_dupla_direita(TNoAVL *p) {
	p->esq = rotacao_esquerda(p->esq);
	p = rotacao_direita(p);
  	return p;
}

TNoAVL *rotacao_dupla_esquerda(TNoAVL *p) {
	p->dir = rotacao_direita(p->dir);
	p = rotacao_esquerda(p);
	return p;

}

TNoAVL *caso1(TNoAVL *p) {
	//chave foi inserida � esquerda de p e causou fb = -2
	TNoAVL *u;

	u = p->esq;
	if (u->fb == -1) { //caso sinais iguais e negativos: rota��o � direita
		printf("\nFazendo rotacao direita em %d", p->chave);
		p = rotacao_direita(p);
	} else { //caso de sinais trocados: rota��o dupla u + p
		printf("\nFazendo rotacao dupla direita em %d", p->chave);
		p = rotacao_dupla_direita(p);
	}
	p->fb = 0;
	return p;
}

TNoAVL *caso2(TNoAVL *p) {
	//chave foi inserida � direita de p e causou fb = 2
	TNoAVL *u;

	u = p->dir;
	if (u->fb == 1) { //caso sinais iguais e positivos: rota��o � esquerda
		printf("\nFazendo rotacao esquerda em %d", p->chave);
		p = rotacao_esquerda(p);
	} else { //caso sinais trocados: rota��o dupla u + p
		printf("\nFazendo rotacao dupla esquerda em %d", p->chave);
		p = rotacao_dupla_esquerda(p);
	}
	p->fb = 0;
	return p;
}

TNoAVL *insere(TNoAVL *p, int chave, int *flag) {
	/* Insere no em uma �rvore AVL, onde p representa a raiz da �rvore,
	chave, a chave a ser inserida e flag � um booleano que indica se � necess�rio propagar opera��o de c�lculo de fb */
	if (p == NULL) {
		p = (TNoAVL *) malloc(sizeof(TNoAVL));
		p->chave = chave;
		p->esq = NULL;
		p->dir = NULL;
		p->fb = 0;
		*flag = 1;
		printf("\nInseriu %d", p->chave);

	} else if (chave < p->chave) { //recurs�o � esquerda
		p->esq = insere(p->esq, chave, flag);
		if (*flag) { //inseriu: verificar balanceamento
			switch (p->fb) {
				case -1: /* fb(pt) = -2 */
					p = caso1(p);
					*flag = 0; //n�o propaga mais
					break;
				case 0:
					p->fb = -1; //ficou maior � esquerda
					break;
				case 1:
					p->fb = 0; // balanceou com inser��o
					*flag = 0; // n�o propaga mais
					break;
			}
		}
	} else if (chave > p->chave) { //recurs�o � direita
		p->dir = insere(p->dir, chave, flag);
		if (*flag) {
			switch (p->fb) {
				case 1: //fb(pt) = 2 e p retorna balanceado
					p = caso2(p);
					*flag = 0; //n�o propaga mais
					break;
				case 0:
					p->fb = 1;
					break;
				case -1: //era mais alto � esquerda, zera fb
					p->fb = 0;
					*flag = 0; //n�o propaga mais
					break;
			}
		}
	}
	//else if (chave == pt->chave) ==> nada a fazer!
	return p;
}


int main() {
	TNoAVL *raiz;
	raiz = NULL;
	int ok;
	//arvore do exerc�cio de inser��o feito em aula
	raiz = insere(raiz, 50, &ok);
	raiz = insere(raiz, 40, &ok);
	raiz = insere(raiz, 30, &ok);
	imprime(raiz, 0);
	raiz = insere(raiz, 55, &ok);
	raiz = insere(raiz, 60, &ok);
	raiz = insere(raiz, 57, &ok);
	raiz = insere(raiz, 58, &ok);
	raiz = insere(raiz, 52, &ok);
	raiz = insere(raiz, 51, &ok);
	//raiz = insere(raiz, 3, &ok);
	//raiz = insere(raiz, 49, &ok);
	printf("\n");
	imprime(raiz, 0);
	printf("\n\n\n\n");


}

