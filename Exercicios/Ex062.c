/*Faça um programa que leia um valor N inteiro
e positivo, calcule e mostre o valor de E, conforme a fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

#include <stdio.h>

void main(){
	int n;
	int i;
	int j;
	float fatorial;
	float e = 1;
	
	printf("Insira o valor de N: ");
	scanf("%d",&n);
	
	for(i=1;i <= n;i++){
		fatorial = 1;
		
		for(j=1;j <= i;j++){
			fatorial *= (float)j;
		}	
		e += 1/fatorial;
	}
	
	printf("Resultado E: %f",e);
}