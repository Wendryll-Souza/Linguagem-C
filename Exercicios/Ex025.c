/*Faça um programa que receba o valor de um
depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor
total depois do rendimento.*/

#include <stdio.h>

void main(){
	float valor_deposito = 0;
	float taxa_juros = 0;
	float rendimento = 0;
	float valor_total = 0;
	
	printf("Digite o valor do deposito: R$");
	scanf("%f",&valor_deposito);
	
	printf("Digite o valor da taxa de juros: ");
	scanf("%f",&taxa_juros);
	
	rendimento = valor_deposito * (taxa_juros / 100);
	valor_total = valor_deposito + rendimento;
	
	printf("Rendimento: R$%.2f\n",rendimento);
	printf("Valor Total: R$%.2f",valor_total);
}