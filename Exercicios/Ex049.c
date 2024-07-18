/*Desenvolva um algoritmo que receba dois números inteiros positivos A e B. Exiba na tela
todos os números inteiros compreendidos entre A e B, excluindo os próprios A e B.
Suponha que o usuário respeite o enunciado e insira valores válidos para A e B.*/

#include <stdio.h>

void main(){
	int num_a = 0;
	int num_b = 0;
	int i;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&num_a);
	
	printf("Digite o segundo valor: ");
	scanf("%d",&num_b);
	
	//resolução com for
	for(i = num_a + 1; i < num_b; i++){
		printf("%d ",i);
	}
	
	//resolução com While 
	i = num_a + 1;
	while(i < num_b){
		printf("%d ",i);
		i++;
	}
}