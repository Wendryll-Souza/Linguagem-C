//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>

void main(){
	int numUm = 0;
	int numDois = 0;
	int numTres = 0;
	int numQuatro = 0;
	int soma = 0;
		
	printf("Digite quatro valores seguidos: \n");
	scanf("%d \n %d \n %d \n %d",&numUm,&numDois,&numTres,&numQuatro);
	
	soma = numUm + numDois + numTres + numQuatro;
	
	printf("A soma dos valores e %d",soma);
}