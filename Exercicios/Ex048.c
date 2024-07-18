/*Desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1
e 10 (inclusive).*/

#include <stdio.h>

void main(){
	int i = 0;
	int soma = 0;

	//Resolução usando for
	for(i = 0; i <= 10; i++){
		soma += i;
	}
	
	//Resolução usando while
	while(i <= 10){
		soma += i;
		i++;
	}
	
	printf("A soma entre todos os valores pares compreendidos entre 1 e 10 e igual a %d\n",soma);
}