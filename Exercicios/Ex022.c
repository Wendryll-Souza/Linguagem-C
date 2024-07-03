//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>

void main(){
	float salario = 0;
	float novo_salario = 0;
	float percentual = 0;
	float aumento = 0;
	
	printf("Digite o salario: R$");
	scanf("%f",&salario);
	
	printf("Digite o percentual de aumento: ");
	scanf("%f",&percentual);
	
	aumento = salario * (percentual / 100);
	novo_salario = salario + aumento;
	
	printf("Valor do aumento: R$%.2f\n",aumento);
	printf("Novo Salario: R$%.2f",novo_salario);
}