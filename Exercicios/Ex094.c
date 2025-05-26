/*Escreva um programa em C que leia um número e informe se ele é divisivel por 2, 3 e 5, ou se não é divisivel por nenhum deles.*/

#include <stdio.h>

void main(){
	short int num = 0;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("O numero digitado e divisivel por ");
	
	if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0){
		printf("nenhum dos valores (2, 3 e 5)");
	}else {
		if(num % 2 == 0){
			printf(" 2 ");
		}
		if(num % 3 == 0){
			printf(" 3 ");
		}
		if(num % 5 == 0){
			printf(" 5 ");
		}	
	}
	
}