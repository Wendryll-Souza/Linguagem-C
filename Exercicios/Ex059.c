/*Desenvolva um algoritmo que receba um
número N e informe se N é um número primo, ou não. A saber: um número primo é um
inteiro positivo que só pode ser dividido por ele mesmo e por um, apenas.*/

#include <stdio.h>

void main(){
	int n;
	int i; //contatdor
	int resultado_divisao = 0;
	
	printf("Digite um numero para saber se e um numero primo: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(n % i == 0){
			resultado_divisao += 1;
		}
	}
	
	if(resultado_divisao == 2){
		printf("%d e primo",n);
	}else{
		printf("%d nao e primo",n);
	}
}