/*Faça um programa que receba um número
positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include <math.h>

void main(){
	int numero = 0;
	int quadrado = 0;
	int cubo = 0;
	float raiz = 0;
	float raiz_cubica = 0;
	
	printf("Digite um numero positivo maior que zero e inteiro[Ex: 5]: ");
	scanf("%d",&numero);

	//quadrado do numero
	quadrado = numero * numero;
	printf("O quadrado do numero: %d\n",quadrado);
	
	//o numero digitado ao cubo
	cubo = numero * numero * numero;
	printf("O cubo do numero: %d\n",cubo);
	
	//a raiz quadrada do numero
	raiz = sqrt(numero);
	printf("A raiz quadrada do numero: %f\n",raiz);

	//a raiz cubica do numero
	raiz_cubica = pow(numero, 1.0 / 3.0);
	printf("A raiz cubica do numero: %f\n",raiz_cubica);
}