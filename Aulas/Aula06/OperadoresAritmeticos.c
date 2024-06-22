#include <stdio.h>

int main(){
	int a, b, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: \n");
	scanf("%d", &b);
	
	soma = a + b;
	subtr = a -b;
	mult = a * b;
	divis = a / b;
	
	printf("Resultados:\n");
	printf("Soma: %d\n", soma);
	printf("Subtracao: %d\n", subtr);
	printf("Multiplicacao: %d\n", mult);
	printf("Divisao: %d\n", divis);
}