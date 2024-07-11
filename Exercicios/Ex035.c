//Faça um programa que receba um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>

void main(){
	int numero;
	
	printf("Digite um numero para saber se ele e par ou impar: ");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("O numero digitado e par.");
	}else{
		printf("o numero digitado e impar");
	}
}