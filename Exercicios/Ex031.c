/*Faça um programa que receba dois números
maiores que zero, calcule e mostre um elevado ao outro.*/

#include <stdio.h>
#include <math.h>

void main(){
	int num_um = 0;
	int num_dois = 0;
	int resultado = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num_um);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&num_dois);
	
	resultado = pow(num_um,num_dois);
	
	printf("A exponenciacao de %d por %d e igual a %d",num_um,num_dois,resultado);
}