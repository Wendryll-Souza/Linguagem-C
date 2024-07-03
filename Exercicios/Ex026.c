/*Faça um programa que calcule e mostre a
área de um triângulo. Sabe-se que: Área = (base * altura)/2.
*/

#include <stdio.h>

void main(){
	float altura;
	float base;
	float area;
	printf("Digite a altura do Triangulo: ");
	scanf("%f",&altura);
	
	printf("Digite a base do triangulo: ");
	scanf("%f",&base);
	
	area = (base * altura) / 2;
	
	printf("A area do triangulo e %.2f",area);
}