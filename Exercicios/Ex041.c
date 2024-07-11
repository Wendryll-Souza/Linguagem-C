/*Faça um programa que receba três números
distintos e mostre-os em ordem crescente.
*/

#include <stdio.h>

void main(){
	int n1,n2,n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%i",&n1);
	printf("Digite o segundo numero: ");
	scanf("%i",&n2);
	printf("Digite o terceiro numero: ");
	scanf("%i",&n3);
	
	if(n1 > n2 && n2 > n3){
		printf("Numeros em ordem crescente: %i -> %i -> %i",n3,n2,n1);
	}else if(n2 > n3 && n3 > n1){
		printf("Numeros em ordem crescente: %i -> %i -> %i",n1,n3,n2);
	}else if(n3 > n2 && n2 > n1){
		printf("Numeros em ordem crescente: %i -> %i -> %i",n1,n2,n3);
	}else if(n1 > n3 && n3 > n2){
		printf("Numeros em ordem crescente: %i -> %i -> %i",n2,n3,n1);
	}else if(n2 > n1 && n1 > n3){
		printf("Numeros em ordem crescente: %i -> %i -> %i",n3,n1,n2);
	}else{
		printf("Numeros em ordem crescente: %i -> %i -> %i",n2,n1,n3);
	}
}