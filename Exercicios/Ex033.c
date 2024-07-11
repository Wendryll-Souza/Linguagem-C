/*Faça um programa que receba dois números
e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os
números são iguais".
*/

#include <stdio.h>

void main(){
	int numUm = 0;
	int numDois = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&numUm);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&numDois);
	
	if(numUm > numDois){
		printf("O maior numero e %d",numUm);
	}else if(numUm < numDois){
		printf("O maior numero e %d",numDois);		
	}else{
		printf("Os numeros sao iguais");
	}
}