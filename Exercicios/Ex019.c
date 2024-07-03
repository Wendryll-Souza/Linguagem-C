//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

void main(){
	float notaUm = 0;
	float notaDois = 0;
	float notaTres = 0;
	float media = 0;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f",&notaUm);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f",&notaDois);
	
	printf("Digite a terceira nota do aluno: ");
	scanf("%f",&notaTres);
	
	media = (notaUm + notaDois + notaTres) / 3;
	
	printf("A media das notas informadas e %.2f", media);
}