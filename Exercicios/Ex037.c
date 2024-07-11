/*Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o
usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só
conseguirá processar dois números inteiros por vez.*/

#include <stdio.h>

void main(){
	float num_a, num_b;
	int op;
	float soma, mult, div, sub;
	
	printf("Menu\n");
	printf("1 - somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicacao\n");
	printf("4 - dividir\n ");
	printf("Digite sua opcao[Ex 3]: ");
	scanf("%d",&op);
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&num_a);
	
	printf("Digite outro numero: ");
	scanf("%f",&num_b);
	
	if(op == 1){
		soma = num_a + num_b;
		printf("A soma entre os valores e %.2f",soma);
	}else if(op == 2){
		sub = num_a - num_b;
		printf("A subtracao entre os valores e %.2f",sub);
	}else if(op == 3){
		mult = num_a * num_b;
		printf("A multiplicacao entre os valores e %.2f",mult);
	}else if(op == 4){
		if(num_b != 0){
			div = num_a / num_b;
			printf("A divisao entre os valores e %.2f",div);	
		}else{
			printf("Nao e possivel dividir um valor por zero.");
		}
				
	}
}