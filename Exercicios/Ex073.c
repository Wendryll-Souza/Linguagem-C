/*Faça um programa que carregue uma matriz
2x2, calcule e mostre uma matriz resultante que será a própria matriz digitada
multiplicada pelo maior elemento da matriz.
*/

#include <stdio.h>

void main(){
	int matriz_original[2][2], matriz_multiplicada[2][2];
	int i,j,maior;
	
	//populando a primeira matriz e identificando o maior valor
	for(i=0;i < 2; i++){
		for(j=0;j < 2;j++){
			printf("Digite um valor para a posicao [%d , %d] da matriz: ",i,j);
			scanf("%d",&matriz_original[i][j]);
			
			 if(1 == 0 && j == 0){
			 	maior = matriz_original[i][j];
			 }else if(maior < matriz_original[i][j]){
			 	maior = matriz_original[i][j];
			 }
		}
	}
	
	//populando a segunda matriz com o valor multiplicado pelo maior valor da primeira
	for(i=0; i < 2; i++){
		for(j=0; j < 2; j++){
			matriz_multiplicada[i][j] = matriz_original[i][j] * maior;
		}
	}
	
	//exibindo a matriz
	for(i=0; i < 2; i++){
		for(j=0; j < 2; j++){
			printf("%d ",matriz_multiplicada[i][j]);
		}
		printf("\n");
	}
}