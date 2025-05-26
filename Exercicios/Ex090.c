#include <stdio.h>

/*Uma empresa contrata um encanador a R$45,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a 
quantidade líquida que deverá ser paga, sabendo que são descontados 8% para impostos de renda.*/

#define VALOR_ENCANADOR 45

int main(){
	
	int dia_tb;
	float valor_liquido,desconto;
	
	printf("Digite o numero de dias trabalhados: ");
	scanf("%d",&dia_tb);
	
	valor_liquido = VALOR_ENCANADOR * dia_tb;
	desconto = valor_liquido * 0.08;
	valor_liquido = valor_liquido - desconto;
	
	printf("Valor liquido a ser pago: R$%.2f\nValor do desconto: R$%.2f",valor_liquido,desconto);
	
	return 0;
}