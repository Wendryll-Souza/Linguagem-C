/*Faça um programa que carregue um vetor
com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor
resultante deve conter os números positivos. O segundo vetor resultante deve conter
os números negativos. Cada vetor resultante vai ter no máximo oito posições, sendo
que nem todas devem obrigatoriamente ser utilizadas. Imprima o conteúdo dos vetores
resultantes, sem que sejam impressos "lixos de memória".*/

#include <stdio.h>

void main(){
	int vet[8], vet_pos[8], vet_neg[8];
	int i,posicao = 0;
	//preenchendo o vetor com números inteiros.
	for(i=0; i < 8; i++){
		printf("Digite um valor para a posicao [%d] do vetor: ",i);
		scanf("%d",&vet[i]);
	}
	
	//lidando com lixo de memoria
	for(i=0;i < 8; i++){
		vet_pos[i] = 0;
		vet_neg[i] = 0;
	}
	
	//preenchendo o segundo vetor com valores positivos
	for(i=0; i < 8; i++){
		if(vet[i] > 0){
			vet_pos[posicao] = vet[i];
			posicao += 1;
		}
	}
	
	posicao = 0;
	
	//preenchendo o terceiro vetor com valores negativos
	for(i=0; i < 8; i++){
		if(vet[i] < 0){
			vet_neg[posicao] = vet[i];
			posicao += 1;
		}
	}
	
	//exibindo o vetor de positivos
	printf("Vetor de positivos:\n");
	for(i=0;i < 8; i++){
		if(vet_pos[i] != 0){
			printf("[%d] ",vet_pos[i]);	
		}
	}	
	
	printf("\n");
	
	//exibindo o vetor de negativos
	printf("Vetor de negativos: \n");
	for(i=0;i < 8; i++){
		if(vet_neg[i] != 0){
			printf("[%d] ",vet_neg[i]);			
		}
	}
	
}