/*Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3. Depois
de a matriz ter sido populada, o algoritmo deverá imprimir a matriz da seguinte forma:
os dados da diagonal principal devem ser impressos normalmente e os dados fora da
diagonal principal devem substituídos por zero.*/

#include <stdio.h>

void main(){
	int matriz[3][3];
	int i, j;
	
	// populando o vetor
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			printf("Digite um valor para a posicao [%d , %d] do vetor: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	//exibindo somente a diagonal principal do vetor;
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			if(i == 0 && j == 0){
				printf("%d ",matriz[i][j]);
			}else if(i == 1 && j == 1){
				printf("%d ",matriz[i][j]);
			}else if(i == 2 && j == 2){
				printf("%d ",matriz[i][j]);
			}else{
				printf("%d ",0);
			}
		}
		printf("\n");
	}	
}