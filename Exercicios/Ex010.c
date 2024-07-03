/*Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas*/

#include <stdio.h>

void main(){
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float media = 0;
	
	
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);

	
	media = (n1 + n2 + n3) / 3;
	
	printf("A media das notas e %.2f",media);
}