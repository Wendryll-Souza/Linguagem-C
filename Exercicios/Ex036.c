/*Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação
entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a
subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.*/

#include <stdio.h>

void main(){
	int num_a,num_b,mult,sub,soma;
	
	printf("Digite um numero: ");
	scanf("%d",&num_a);
	
	printf("Digite outro numero: ");
	scanf("%d",&num_b);
	
	if(num_a == num_b){
		mult = num_a * num_b;
		printf("A multiplicacao entre %d e %d e igual a %d.\n",num_a,num_b,mult);
	}else if(num_a > num_b){
		sub = num_a - num_b;
		printf("A divisao de %d por %d e igual a %d.\n",num_a,num_b,sub);
	}else{
		soma = num_a + num_b;
		printf("A soma entre %d por %d e igual a %d.",num_a,num_b,soma);
	}
}