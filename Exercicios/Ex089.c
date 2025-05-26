#include <stdio.h>

int main(){
	/*Escreva em programa que leia um valor de despesa de restaurante, valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada 
	um deva pagar. Assuma que a conta será dividida igualmente.*/
	
	float valor_pagar, gorjeta, valor_conta,valor_pessoa;
	int num_pessoas = 0;
	
	printf("Calculo de contas a pagar\n");
	
	printf("Digite o valor da conta: R$");
	scanf("%f",&valor_pagar);
	
	printf("Digite o percentual de gorjeta: ");
	scanf("%f",&gorjeta);
	
	printf("Digite a quantidade de pessoas para pagar a conta: ");
	scanf("%d",&num_pessoas);
	
	valor_conta = valor_pagar + (valor_pagar * (gorjeta / 100));
	valor_pessoa = valor_conta / num_pessoas;
	
	printf("Valor pago por pessoa: R$%.2f",valor_pessoa); 
	
	return 0;
}