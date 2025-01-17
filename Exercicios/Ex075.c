/*Faça um programa que carregue uma matriz
3 x 5 com números inteiros e some cada uma das linhas, armazenando o resultado das
somas em um vetor. A seguir, multiplique cada elemento da matriz pela soma da
respectiva linha daquele elemento e mostre a matriz resultante.*/

#include <stdio.h>

void main(){
	int matriz [3][5];
	int matriz_soma[3];
	int i, j, soma = 0;
	
	for(i=0; i < 3; i++){
		for(j=0; j < 5; j++){
			printf("Digite um valor para a posicao [%d , %d] do vetor: ",i,j);
			scanf("%d",&matriz[i][j]);
			
			soma += matriz[i][j];
		}	
		
		matriz_soma[i] = soma;
		soma = 0;
	}
	
	for(i=0; i < 3; i++){
		for(j=0; j < 5; j++){
			if(i == 0){
				printf("%d ",matriz[i][j] * matriz_soma[i]);
			}else if(i == 1){
				printf("%d ",matriz[i][j] * matriz_soma[i]);				
			}else{
				printf("%d ",matriz[i][j] * matriz_soma[i]);
			}
		}
		printf("\n");
	}
	
}