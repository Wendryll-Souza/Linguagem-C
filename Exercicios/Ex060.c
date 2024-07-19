/*Desenvolva um algoritmo que mostre a tabuada de todos os números inteiros
compreendidos entre 1 e 10 (inclusive).*/

#include <stdio.h>

void main(){
	int i,contador;
	int n = 1; //numero da vez
	
	contador = 1;
	
	while(contador <= 10){
		for(i=1;i<=10;i++){
			printf("%d X %d = %d\n",n,i,n*i);
		}
		printf("\n");
		n += 1;
		contador += 1;
	} 
	
}