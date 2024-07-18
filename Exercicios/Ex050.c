/*Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo
que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.*/

#include <stdio.h>

void main(){
	int num = 0;
	int fatorial = 1;
	int i = 0;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	for(i=num; i >= 1; i--){
		fatorial *= i;
	}
	
	printf("%d! = %d",num,fatorial);
}