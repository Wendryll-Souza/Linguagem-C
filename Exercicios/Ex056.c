/*Desenvolva um algoritmo que peça ao usuário que insira dois números inteiros positivos
A e B, no qual A deve ser menor que B (supõe-se que o usuário irá respeitar esse
enunciado). O algoritmo deve mostrar, na tela, todos os números ímpares
compreendidos entre A e B (inclusive).
*/

#include <stdio.h>

void main(){
	int a,b;
	int contador;
	printf("Insira o valor A: ");
	scanf("%d",&a);
	
	do{
		printf("Insira o valor B que deve ser maior que A: ");
		scanf("%d",&b);
	}while(a >= b);
	
	for(contador = a; contador < b; contador++){
		if(contador % 2 != 0){
			printf("Valor impar: %d\n",contador);
		}
	}
}