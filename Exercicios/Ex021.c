//) Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

void main(){
	float salario = 0;
	float novo_salario = 0;
	
	printf("Digite o salario do funcionario: R$");
	scanf("%f",&salario);
	
	novo_salario = salario + (salario * 0.25);
	
	printf("O salario depois de 25%% de aumento e R$%.2f",novo_salario);
}