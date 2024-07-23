/*Desenvolva um algoritmo que peça ao usuário que preencha os dados de um vetor de 5
posições com valores reais quaisquer, desde que estejam compreendidos entre 1 e 100
(suponha que o usuário irá respeitar o enunciado). Ao final, o algoritmo deve mostrar,
na tela, o conteúdo de cada posição do vetor, dividido por 100.*/

#include <stdio.h>

void main(){
	float valores[5];
	int i;
	float resultado = 0;
	
	for(i=0;i < 5;i++){
		printf("Digite um valor para a %d posicao do vetor: ",i);
		scanf("%f",&valores[i]);
	}
	printf("Conteudo dividido por 100:\n");
	for(i=0; i < 5;i++){
		resultado = valores[i] / 100;
		printf("%.1f\n",resultado);
	}
}