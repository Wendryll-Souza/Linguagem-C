//	Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal.

#include <stdio.h>

int main(){
	int decimal;
	
	printf("Digite um valor decimal para convertelo em Hexadecimal e Octal: ");
	scanf("%d", &decimal);
	
	printf("Valor convertido para Hexadecimal: %x\n", decimal);
	printf("Valor convertido para Octal: %o",decimal);
}