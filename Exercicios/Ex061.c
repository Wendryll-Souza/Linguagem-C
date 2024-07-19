/*Faça um programa que leia um número N e
que indique quantos valores inteiros e positivos devem ser lidos a seguir. Para cada
número lido, mostre o fatorial desse valor.
*/

#include <stdio.h>

void main(){
	int qtd_numeros = 0;
	int contador = 1;
	int numero;
	int i;
	int fatorial = 1;
	
	printf("Digite quantos numeros seram exibidos: ");
	scanf("%d",&qtd_numeros);
	
	if(qtd_numeros == 0){
		printf("Nao sera exibido nenhum fatorial.");
	}else{
		while(contador <= qtd_numeros){
			printf("Digite o %d numero: ",contador);
			scanf("%d",&numero);
			
			for(i=1;i<=numero;i++){
				fatorial *= i;
			}
			
			printf("O fatorial de %d e %d\n",numero,fatorial);
			contador += 1;
			fatorial = 1;
		}
	}
}