// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

#include <stdio.h>

void main(){
	float nota1,nota2,nota3;
	float peso1,peso2,peso3;
	float media = 0;
	
	printf("Digite a primeira nota: \n");
	scanf("%f",&nota1);

	printf("Digite o peso da primeira nota: \n");
	scanf("%f",&peso1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f",&nota2);
	
	printf("Digite o peso da segunda nota: \n");
	scanf("%f",&peso2);
	
	printf("Digite a terceira nota: \n");
	scanf("%f",&nota3);
	
	printf("Digite o peso da terceira nota: \n");
	scanf("%f",&peso3);
	
	media = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / (peso1 + peso2 + peso3);

	printf("A media ponderada das notas e %.2f",media);
}

