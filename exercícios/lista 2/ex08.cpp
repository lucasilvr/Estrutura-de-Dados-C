#include <stdio.h>
#include <math.h>

float calculo_hipotenusa(float, float);

int main(){
	
	float catetoAdjacente, catetoOposto, hipotenusa, seno, cosseno;
	
	printf("Digite o valor do Cateto Adjacente: ");
	scanf("%f", &catetoAdjacente);
	printf("Digite o valor do Cateto Oposto: ");
	scanf("%f", &catetoOposto);
	hipotenusa = calculo_hipotenusa(catetoAdjacente, catetoOposto);
	seno = catetoOposto/hipotenusa;
	cosseno = catetoAdjacente/hipotenusa;
	
	printf("\nO Cateto Adjacente: %.1f\n", catetoAdjacente);
	printf("O Cateto Oposto: %.1f\n", catetoOposto);
	printf("A hipotenusa: %.3f\n", hipotenusa);
	printf("O Seno: %.3f\n", seno);
	printf("O Cosseno: %.3f\n", cosseno);
	
}

float calculo_hipotenusa(float adj, float opos){	
	float result = sqrt(pow(adj,2) + pow(opos,2));
	return result; 
}
