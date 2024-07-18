/*Desenvolva um algoritmo que receba um número N e imprima a tabuada de N, na tela.*/

#include <stdio.h>

void main(){
	int n;
	int i;
	int valor;
	
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d",&n);
	
	for(i = 1; i <= 10 ; i++){	
		valor = i * n;
		printf("%d X %d = %d\n",n,i,valor);
	}
}