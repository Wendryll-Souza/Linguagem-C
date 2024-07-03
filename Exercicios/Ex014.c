/*Faça um programa que receba o sálario de um funcionario, calcule e mostre o salario a receber, 
sabendo-se que esse funcionario tem gratificação de 5% sobre o salario base e paga imposto de 7% sobre o salario base*/

#include <stdio.h>

void main(){
	float salario = 0;
	float salario_receber = 0;
	float imposto = 0;
	float gratificacao = 0;
	
	printf("Digite o valor do salario: R$"); // escrevendo na tela o que o usuario precisa digitar
	scanf("%f",&salario); //recebendo salario 
	
	imposto = salario * 0.07; //calculo do imposto
	gratificacao = salario * 0.05;	//calculo da gratificacao
	salario_receber = salario + gratificacao - imposto;
	
	printf("Salario: R$%.2f\n",salario);
	printf("Gratificacao: R$%.2f\n",gratificacao);
	printf("Imposto: R$%.2f\n",imposto);
	printf("Salario a receber: R$%.2f\n",salario_receber);
}