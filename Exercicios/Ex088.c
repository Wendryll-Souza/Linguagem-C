/*Faça um programa em c para trocar o valor de duas variáveis inteiras sem utilizar nenhuma variável auxiliar.*/

#include <stdio.h>

int main(){
	int a,b;
	
	printf("Digite um valor para A: ");
	scanf("%d",&a);

	printf("Digite um valor para B: ");
	scanf("%d",&b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("Valores A:%d B:%d",a,b);
		
	return 0;
}