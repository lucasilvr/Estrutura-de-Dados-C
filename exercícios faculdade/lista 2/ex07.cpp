/*Calcule o valor da hipotenusa sabendo que 
hipotenusa = cateto adjacente elevado a 2 potência + cateto oposto elevado a 2 potência*/

#include <stdio.h>
#include <math.h>

float calculo_hipotenusa(float, float);

int main(){
	float catetoAdjacente, catetoOposto, hipotenusa;
	
	printf("Digite o valor do cateto adjacente: ");
	scanf("%f", &catetoAdjacente);
	printf("Digite o valor do cateto oposto: ");
	scanf("%f", &catetoOposto);
	hipotenusa = calculo_hipotenusa(catetoAdjacente, catetoOposto);

	printf("\nValor do Cateto Adjacente: %.1f\n", catetoAdjacente);
	printf("Valor do Cateto Oposto: %.1f\n", catetoOposto);	
	printf("Valor da Hipotenusa: %.1f\n", hipotenusa);	

	return 0;
}

float calculo_hipotenusa(float adj, float opos){
	float result = sqrt(pow(adj, 2) + pow(opos, 2));
	return result;
}
	
	
