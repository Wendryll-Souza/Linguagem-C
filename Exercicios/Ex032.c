/* Sabe-se que:
1 pé = 12 polegadas;
1 jarda = 3 pés;
1 milha = 1760 jardas;
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre
os resultados.
a) polegadas;
b) jardas;
c) milhas.*/

#include <stdio.h>

void main(){
	int pes = 0;
	int polegadas = 0;
	int jardas = 0;
	int milhas = 0;
	
	printf("Digite um valor em pes para converter[Ex 30]: ");
	scanf("%d",&pes);
	
	//resposta a
	polegadas = pes * 12;
	printf("Polegadas: %d\n",polegadas);
	
	//resposta b
	jardas = pes / 3;
	printf("Jardas: %d\n",jardas);
	
	//resposta c
	milhas = jardas / 1760;
	printf("Milhas: %d\n",milhas);
}