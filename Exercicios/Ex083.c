/*Faça um programa que receba o número de
horas trabalhadas por um gestor e o valor do salário mínimo vigente. Crie uma função
que calcule o salário a receber do gestor, seguindo as regras abaixo:
I - a hora trabalhada vale a metade do salário mínimo;
II - o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da
hora trabalhada;
III - o imposto equivale a 3% do salário bruto;
IV - o salário a receber equivale ao salário bruto menos o imposto.
Crie um algoritmo que invoque a respectiva função e mostre o salário a receber*/

#include <stdio.h>

float calc_salario(float salario_minimo, int horas_trabalhadas){
	float salario_bruto = 0, valor_hora = 0,imposto = 0, salario_receber = 0;
	
	valor_hora = salario_minimo / 2;
	salario_bruto = horas_trabalhadas * valor_hora;
	imposto = salario_bruto * 0.03;
	salario_receber = salario_bruto - imposto;
	
	
	return salario_receber;
}

void main(){
	int horasTrabalhadas = 0;
	float salarioMinimo = 0,salario = 0;
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%i",&horasTrabalhadas);
	
	printf("Digite o salario minimo: R$");
	scanf("%f",&salarioMinimo);
	
	salario = calc_salario(salarioMinimo, horasTrabalhadas);
	
	printf("Salario a receber: R$ %.2f",salario);
}