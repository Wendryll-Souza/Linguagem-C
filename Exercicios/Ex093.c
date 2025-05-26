/*Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores são negativos e quantos são positivos. Ao final,
imprima na tela a quantidade de números negativos e positivos*/

#include <stdio.h>

int main(){
	
	int negativo = 0;
	int positivo = 0;
	int num = 0;
	int i;
	
	for(i=0; i <5; i++){
		printf("Digite o %d numero: ",i+1);
		scanf("%d",&num);
	
		if(num > 0){
			positivo += 1;
		}else{
			negativo += 1;
		}
	
	}	
	
	printf("foram digitados %d numeros negativos e %d numeros positivos",negativo,positivo);
	
	return 0;
}