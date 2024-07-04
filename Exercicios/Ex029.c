/*Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor
total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50,
20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba
o menor número de notas possível. */

#include <stdio.h>

void main(){
	int	 valor_sacar = 0;
	int nota100 = 0;
	int nota50 = 0;
	int nota20 = 0;
	int nota10 = 0;
	int nota5 = 0;
	int nota2 = 0;
	
	printf("Digite o valor a sacar [temos notas de 100 - 50 - 20 - 10 - 5 -2]: ");
	scanf("%d",&valor_sacar);
	
	
	while (valor_sacar != 0){
		if(valor_sacar >= 100){
			nota100 = valor_sacar / 100;
			valor_sacar = valor_sacar % 100;
		}else if(valor_sacar >= 50){
			nota50 = valor_sacar / 50;
			valor_sacar = valor_sacar % 50;
		}else if(valor_sacar >=20){
			nota20 = valor_sacar / 20;
			valor_sacar = valor_sacar % 20;
		}else if(valor_sacar >= 10){
			nota10 = valor_sacar / 10;
			valor_sacar = valor_sacar % 10;			
		}else if(valor_sacar >= 5){
			nota5 = valor_sacar / 5;
			valor_sacar = valor_sacar % 5;
		}else if(valor_sacar >= 2){
			nota2 = valor_sacar / 2;
			valor_sacar = valor_sacar % 2;
		}
	}
	
	printf("notas de R$100.00: %d\n",nota100);
	printf("notas de R$50.00: %d\n",nota50);
	printf("notas de R$20.00: %d\n",nota20);
	printf("notas de R$10.00: %d\n",nota10);
	printf("notas de R$5.00: %d\n",nota5);
	printf("notas de R$2.00: %d\n",nota2);
}