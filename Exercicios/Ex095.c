/*Faça um programa para ler um número inteiro e verificar se corresponde a um mês Válido no calendario. Caso corresponda, escreva o nome do mês, caso contrario,
escreva a mensagem mês invalido*/

#include <stdio.h>

void main(){
	short int num = 0;
	
	printf("Digite um numero para ver seu mes correspondente: ");
	scanf("%d",&num);
	
	switch(num){
		case 1: 
			printf("Janeiro"); 
			break;
		case 2: 
			printf("Fevereiro"); 
			break;
		case 3: 
			printf("Março"); 
			break;
		case 4: 
			printf("Abril"); 
			break;
		case 5: 	
			printf("Maio"); 
			break;
		case 6: 
			printf("Junho"); 
			break;
		case 7: 
			printf("Julho"); 
			break;
		case 8: 
			printf("Agosto"); 
			break;
		case 9: 
			printf("Setembro");
			 break;
		case 10:
			printf("Outubro");
			  break;
		case 11:
			printf("Novembro");
			  break;
		case 12:
			printf("Dezembro"); 
			break;
		default:
			printf("Mes invalido!");
	}
	
}