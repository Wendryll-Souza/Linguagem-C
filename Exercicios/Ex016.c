//Faça um programa que calcule e mostre a área de um triangulo. Sabe-se que: Área = (base * altura) / 2

#include <stdio.h>

void main(){
	float base = 0;
	float altura = 0;
	float area = 0;
	
	printf("Digite o valor da BASE: ");
	scanf("%f",&base);
	
	printf("Digite o valor da ALTURA: ");
	scanf("%f",&altura);
	
	area = (base * altura) / 2;
	
	printf("a area do triangulo e %.2f",area);
}