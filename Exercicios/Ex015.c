// Faça um programa que receba o salário de um funcionario, calcule e mostre o
//seu salário a receber, sabendo que esse funcionario tem gratificação de R$50,00 e paga imposto de 10% sobre o salário-base.

#include <stdio.h>

void main(){
	float salario = 0;
	float novo_salario = 0;
	
	printf("Digite o salario: R$");
	scanf("%f",&salario);
	
	novo_salario = salario + 50 - (salario * 0.1);
	
	printf("O novo salario e de %.2f",novo_salario );
	
}