#include <stdio.h>

int main(){
	//Operdor lógico E
	//O operador E retorna verdadeiro se ambas as opções forem verdadeiras
	float m;
	
	printf("Digite a media: ");
	scanf("%f",&m);	
	setbuf(stdin,NULL);
	if(m >= 4.0 && m < 7.0){
		printf("\tTem direito a exame!\n");
	}
	
 	//Opreador lógico OU
 	//O operador OU retorna verdadeiro se uma das alternativas forem verdadeiras
 	int num = 0;
 	
 	printf("Digite 1 ou 2: ");
	scanf("%d",&num);
	setbuf(stdin,NULL);	
	(num == 1) || (num == 2) ? printf("\tNumero correto digitado\n") : printf("\tNumero invalido tente novamente\n");
	
	//Operador lógico NÃO
	//O operador NÃO inverte o valor de verdadeiro para falso, e de falso para verdadeiro
	printf("Digite um numero para saber se e PAR ou IMPAR: ");
	scanf("%d",&num);
	
	!(num % 2 == 0 ) ? printf("\tO numero digitado e par\n") : printf("\tO numero digitado e impar\n");
}