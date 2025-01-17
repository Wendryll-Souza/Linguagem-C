//biblioteca Ctype

#include <stdio.h>
#include <ctype.h>

void main(){
	char letra;
	
	printf("Digite uma frase: ");
	scanf("%c",&letra);
	
	printf("O que foi digitado e um numero? ");
	
	if(isdigit(letra)){ //verificando se o que foi digitado é um número ou não
		printf("Sim");
	}else{
		printf("Nao");
	}
	
	printf("\nO que foi digitado e uma letra? ");
	
	if(isalpha(letra)){ //verificando se o que foi digitado é uma letra do alfabeto
		printf("Sim");
	}else{
		printf("Nao");
	}
	
	printf("\nO que foi digitado e um espaco em branco? ");
	
	if(isspace(letra)){
		printf("Sim");
	}else{
		printf("Nao");
	}
	
	printf("\nO que foi digitado esta em minusculo? ");
	
	if(islower(letra)){
		printf("Sim");
	}else{
		printf("Nao");
	}

	printf("\nO que foi digitado esta em maiusculo? ");
	
	if(isupper(letra)){
		printf("Sim");
	}else{
		printf("Nao");
	}
	
	printf("\nPassando o que foi digitado para minusculo: %c",tolower(letra));
	
	printf("\nPassando o que foi digitado para maiusculo: %c",toupper(letra));
}