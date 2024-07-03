/*Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas*/

#include <stdio.h>

void main(){
	float notaUm, notaDois,notaTres,media;
	int pesoUm, pesoDois, pesoTres;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&notaUm);
	
	printf("Digite o peso da primeira nota: ");
	scanf("%d",&pesoUm);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&notaDois);
	
	printf("Digite o peso da segunda nota: ");
	scanf("%d",&pesoDois);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&notaTres);
	
	printf("Digite o peso da terceira nota: ");
	scanf("%d",&pesoTres);
	
	media = ((notaUm * pesoUm) + (notaDois * pesoDois) + (notaTres * pesoTres)) / (pesoUm + pesoDois + pesoTres );

	printf("A media ponderada e %1.2f",media);
}