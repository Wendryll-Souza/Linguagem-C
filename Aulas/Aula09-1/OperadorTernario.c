#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	//Operador ternario simples
	num % 2 == 0 ? printf("\tResposta Operador ternario simples: O numero digitado e par\n") : printf("\tResposta Operador ternario simples:O numero digitado nao e par\n");
	//Operador ternario composto
	num % 2 != 0? printf("\tResposta Operador ternario composto:O numero digitado nao e par") :
		num % 2 == 0 && num != 0 ?  printf("\tResposta Operador ternario composto:O numero digitado e par e diferente de zero\n") : printf("\tResposta Operador ternario composto:O numero digitado e zero\n");
	
	return 0;
}