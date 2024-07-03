/*Faça algoritmo para calcular o novo salário de um funcionario. Sabe-se que os funcionarios que possuem salário atual até R$500,00 serão aumentados em 
20%. Os demais terão aumento em 10%.*/

#include <stdio.h>

int main(){
	float salario_atual = 0;
	float novo_salario = 0;
	
	printf("Digite o salario atual do funcionario: R$");
	scanf("%f",&salario_atual);
	
	if (salario_atual <= 500.00) {
		novo_salario = (salario_atual * 0.2) + salario_atual; //Calculando o aumento de 20%
	}else{
		novo_salario = (salario_atual * 0.1) + salario_atual; //Calculando o aumento de 10%
	}

	printf("Salario atual do funcionario: R$%.2f\nSalario depois do aumento: R$%.2f",salario_atual,novo_salario);
}