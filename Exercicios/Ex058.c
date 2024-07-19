/*Faça um programa que mostre os oito
primeiros termos da sequência de Fibonacci.

0-1-1-2-3-5-8-13-...*/

#include <stdio.h>

void main(){
	int t1 = 0;
	int t2 = 1;
	int t3 = 1;
	int i;
	
	printf("Os oito primeiros numeros da sequencia de Fibonacci: ");
	for(i=0;i < 8;i++){
		printf("%d -> ",t1);
		
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
	}	
	printf("FIM");
}