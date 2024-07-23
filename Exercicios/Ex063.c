/*Desenvolva um algoritmo que peça ao
usuário que insira cinco conjuntos de dois números inteiros positivos (A, B), no qual A
deve ser menor que B (supõe-se que o usuário irá respeitar esse enunciado). Para cada
dupla (A, B), informada pelo usuário, o algoritmo deve mostrar, na tela, todos os
números pares compreendidos entre A e B (inclusive).*/

#include <stdio.h>

void main(){
	int i,contador;
	int a,b;
	
	for(i=0;i < 5;i++){
		printf("Digite um valor para A: ");
		scanf("%d",&a);
		
		printf("Digite um valor para B: ");
		scanf("%d",&b);
		
		contador = a;
		
		for(contador=a;contador <= b;contador++){
			if(contador % 2 == 0){
				printf("e par: %d\n",contador);
			}
		}
	}
	
}