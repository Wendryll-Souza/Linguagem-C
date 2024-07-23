/*Faça um programa que carregue dois vetores
de dez elementos numéricos cada um e mostre um vetor resultante da intercalação
desses dois vetores.
*/

#include <stdio.h>

void main(){
	int vet1[10];
	int vet2[10];
	int result[20];
	int i,j;
	
	for(i = 0; i < 10; i++){
		printf("Vetor 1 - Insira o valor para a posicao %d do vetor: ",i);
		scanf("%d",&vet1[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("Vetor 2 - Insira o valor para a posicao %d do vetor: ",i);
		scanf("%d",&vet2[i]);
	}
	
	printf("\n");
	
	j = 0;
  	for (i = 0; i < 10; i++)
	{
	  result[j] = vet1[i];
	  result[j + 1] = vet2[i];
	  j += 2;
	}
  	for (i = 0; i < 20; i++)
	{
	  printf ("%d ", result[i]);
	}
}