/*Faça um programa que mostre o menu de
opções a seguir, receba a opção do usuário e dos dados necessários para executar cada
operação. Suponha que o usuário não irá inserir valores inválidos.

Menu de opções:
1. Somar dois números
2. Raiz quadrada de um número
Digite a opção desejada
*/

#include <stdio.h>
#include <math.h>
void main(){
	float n1,n2,resultado;
	int op;
	
	printf("MENU\n");
	printf("1 - Somar dois numeros\n");
	printf("2 - Raiz quadrada de um numero\n");	
	
	printf("Digite a opcao desejada: ");
	scanf("%i",&op);
	
	if(op == 1){
		printf("Digite o primeiro numero: ");
		scanf("%f",&n1);
		
		printf("Digite o segundo numero: ");
		scanf("%f",&n2);
		
		resultado = n1 + n2;
		
		printf("A soma entre os valore e %.1f",resultado);
	}else if (op == 2){
		printf("Digite o numero: ");
		scanf("%f",&n1);
		
		resultado = sqrt(n1);
		
		printf("A raiz de %.1f e igual a %.1f",n1,resultado);
	}
}