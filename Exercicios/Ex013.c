/*Faça um programa que receba o salário de um funcionario e o percentual de aumento,calcule e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>

void main(){
	float salario = 0;
	float novoSalario = 0;
	float aumento = 0;
	float percentual_aumento = 0;
	
	printf("Digite o salario: ");
	scanf("%f",&salario);
	
	printf("Digite o percentual de aumento [Ex: 16]: ");
	scanf("%f",&percentual_aumento);
	
	aumento = salario * (percentual_aumento / 100);
	
	novoSalario = salario + aumento;
	
	printf("O salario de R$%.2f teve um aumento de R$%.2f (%.1f%%) e passou a ser R$%.2f",salario,aumento,percentual_aumento,novoSalario);
}