/*Faça um programa que calcule e mostre a
área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14*/

#include <stdio.h>

void main(){
	float raio;
	float area;
	float pi = 3.14;
	
	printf("Digite o raio: ");
	scanf("%f",&raio);
	
	area = pi * (raio * raio);
	
	printf("Area do circulo: %.2f",area);
}