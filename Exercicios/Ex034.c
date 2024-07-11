/*Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir
"Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros
dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a
mensagem: "Erro".
*/

#include <stdio.h>

void main(){
	int num1,num2,num3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d",&num3);
	
	if(num1 > num2 && num1 > num3 ){
		printf("Condicao satisfeira");
	}else{
		printf("Erro");
	}
}