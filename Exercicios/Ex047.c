/*Faça um programa que receba o salário de
um funcionário, calcule e mostre o novo salário desse funcionário, acrescido de
bonificação e de auxílio-escola.
Salário Bonificação
Até R$ 500,00 5% do salário
Entre R$ 500,01 e R$ 1.200,00 12% do salário
Acima de R$ 1.200,00 Sem bonificação
Salário Auxílio-escola
Até R$ 600,00 R$ 150,00
Mais que R$ 600,00 R$ 100,00 */


#include <stdio.h>

void main(){
	float salario = 0;
	float novo_salario = 0;
	
	printf("Digite o salario do funcionario: R$");
	scanf("%f", &salario);
	
	//Bonificação
	if(salario <= 500.00){
		novo_salario = salario + (salario * 0.05);
	}else if(salario > 500.00 && salario <= 1200.00){
		novo_salario = salario + (salario * 0.12);
	}else{
		novo_salario = salario;
	}

	//Auxílio-escola	
	if(salario <= 600){
		novo_salario += 150.00;
	}else{
		novo_salario += 100.00;
	}
	
	printf("Salario acrescido de bonificacao e auilio escola: R$%.2f",novo_salario);
}