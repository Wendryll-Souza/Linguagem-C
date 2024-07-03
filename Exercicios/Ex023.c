/*Faça um programa que receba o salário-base
de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário
tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.*/

#include <stdio.h>

void main(){
	float salario = 0;
	float gratificacao = 0;
	float imposto = 0;
	float novo_salario;
	
	printf("Digite o salario do funcionario: R$");
	scanf("%f",&salario);
	
	gratificacao = salario * 0.05;
	
	imposto = salario * 0.07;
	
	novo_salario = salario + gratificacao - imposto;
	
	printf("O novo salario do funcionario e R$%.2f",novo_salario);
}