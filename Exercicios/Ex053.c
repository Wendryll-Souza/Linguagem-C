/*Um funcionário de uma empresa recebe
aumento salarial anualmente. Sabe-se que:
a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro
da porcentagem do ano anterior.
Faça um programa que receba o ano atual determine o salário atual desse funcionário*/

#include <stdio.h>

void main(){
	float salario;
	int ano, i;
	float porcentagem;
	
	salario = 1000.00;
	porcentagem = 1.5 / 100;
	
	printf("Digite o ano: ");
	scanf("%d",&ano);
	
	if(ano == 2015){
		salario = 1000.00;
	}else if(ano == 2016){
		salario += salario * 0.015;
	}else if(ano >= 2017){
		salario += salario * 0.015;	
		for(i = 2017; i <= ano; i++){
			porcentagem  = 2 * porcentagem;
			salario += salario * porcentagem;
		}
	}
	printf("O salario atual e: R$%.2f",salario);
	
}