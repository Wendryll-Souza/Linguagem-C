/* Faça um programa que carregue um vetor e
nove elementos numéricos inteiros, calcule e mostre os números primos e suas
respectivas posições*/

#include <stdio.h>

void main(){
	int numeros[9];
	int i,j;
	int qtd_divisao = 0;
	
	
	for(i=0; i < 9; i++){
		printf("Digite o dado para a posicao %d do vetor: ",i);
		scanf("%d",&numeros[i]);
	}
	
	for(i=0; i < 9;i++){
		qtd_divisao = 0;
		for(j = 1; j <= numeros[i];j++){
			if(numeros[i] % j == 0){
				qtd_divisao += 1;	
			}
		}
		if(qtd_divisao == 2){
			printf("%d e par e esta na posicao %d. \n",numeros[i],i);
		}
	}
}