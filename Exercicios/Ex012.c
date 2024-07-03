/*Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%*/

#include <stdio.h>

void main(){
	float salario = 0;
	float novo_salario = 0;
	
	printf("Digite o salario do funcionario: R$");
	scanf("%f",&salario);
	
	novo_salario = salario*1.25;
	
	printf("O colaborador que possui salario de R$%.2f com 25%% de aumento passa a ganhar R$%.2f",salario,novo_salario);
}