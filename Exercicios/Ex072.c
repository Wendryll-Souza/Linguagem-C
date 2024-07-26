/*Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3. Ao
final, o algoritmo deve mostrar o somatório de todos os elementos da matriz, bem como
a média aritmética entre todos os termos.*/

#include <stdio.h>

void main(){
	int matriz[3][3];
	int i,j;
	int soma = 0,media = 0 ,qtd_valores = 0;
	
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			printf("Digite um valor para a posicao [%d , %d] da matraiz: ",i,j);
			scanf("%d",&matriz[i][j]);
			qtd_valores += 1;
			soma += matriz[i][j];
		}
	} 
	
	media = soma / qtd_valores;
	
	printf("Somatorio: %d\n",soma);
	printf("Media: %d",media);
	
	
}