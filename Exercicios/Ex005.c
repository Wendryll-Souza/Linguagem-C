//Fazer um programa em "C" que solicite 2 números e informe:
// a) A soma dos números;
// b) O produto do primeiro número pelo quadrado do segundo;
// c) O quadrado do primeiro número;
// d) A raiz quadrada da soma dos quadrados;
// e) O seno da diferença do primeiro número pelo segundo;
// f) O módulo do primeiro número.

#include <stdio.h>

int main(){
	int n1,n2,resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	//resposta a
	resultado = n1 + n2;
	printf("A soma entre %d e %d e igual a %d.\n", n1,n2,resultado);
	
	//resposta b
	resultado = n1 * (n2 * n2);
	printf("O produto de %d pelo quadrado de %d e igual %d.\n",n1, n2, resultado);
	
	//resposta c
	resultado = n1 * n1;
	printf("O quadrado do primeiro numero e %d.\n",resultado);

	//resposta d
	resultado = ((n1 * n1) + (n2 * n2))*0.5;
	printf("A raiz quadrada da soma dos quadrados de %d e %d e igual a %d.\n",n1,n2,resultado);
}