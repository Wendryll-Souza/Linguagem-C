/*Faça um programa que receba o salário-base
de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse
funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.*/

#include <stdio.h>

void main(){
	float salario = 0;
	float novo_salario = 0;
	
	printf("Digite o salario do funcionario: R$");
	scanf("%f",&salario);
	
	novo_salario = salario + 600 - (salario * 0.1);
	
	printf("Novo salario: R$%.2f",novo_salario);	
}