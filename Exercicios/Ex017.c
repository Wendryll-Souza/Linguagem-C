// Faça um programa que calcule e mostre a área de um círculo sabe-se que área = Pi* r²

#include <stdio.h>

void main(){
	float PI = 3.14;
	float raio = 0;
	float area = 0;
	
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	
	area = PI * (raio * raio);
	
	printf("A area do circulo e %.2f",area);
	
}