#include <stdio.h>
#include <math.h>

/*Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números*/

void main(){
	int contador = 1;
	int num = 0;
	int soma = 0;
	
	for(contador; contador <= 4;contador++){
		printf("Digite o %d valor: ",contador);
		scanf("%d",&num);
		
		soma += num;
	}
	
	printf("A soma dos valores digitados e %d",soma);
}