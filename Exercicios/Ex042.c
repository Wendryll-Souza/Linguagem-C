/*Faça um programa que receba três números
obrigatoriamente em ordem crescente e um quarto número que não siga esta regra.
Mostre, em seguida, os quatro números em ordem não-crescente.
*/

#include <stdio.h>

void main(){
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%i",&n1);
	
	while(n2 < n1 || n2 == n1){
		printf("Digite o segundo numero, maior que o anterior: ");	
		scanf("%i",&n2);
	}

	while(n3 < n2 || n3 == n2){
		printf("Digite o terceiro numero maior que os dois anteriores: ");	
		scanf("%i",&n3);	
	}
	
	printf("Digite o quarto numero: ");
	scanf("%i",&n4);
	
	if(n4 > n3){
		printf("%i - %i - %i - %i",n4,n3,n2,n1);
	}else if(n4 > n2 && n4 < n3){
		printf("%i - %i - %i - %i",n3,n4,n2,n1);
	}else if(n4 > n1 && n4 < n2){
		printf("%i - %i - %i - %i",n3,n2,n4,n1);		
	}else{
		printf("%i - %i - %i - %i",n3,n2,n1,n4);		
	}
	
}