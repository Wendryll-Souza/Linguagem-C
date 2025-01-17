/*Construa um programa que leia duas strings
fornecidas pelo usuário, através da entrada
padrão, verifique se estas possuem o mesmo
tamanho, caso possuam, as compare. Se forem
iguais, retorne uma mensagem na saída padrão
indicando este fato. Caso contrário, concatene-as
e retorne o resultado desta operação na saída
padrão. */

#include <stdio.h>
#include <string.h>
void main(){
	char str1[100];
	char str2[100];
	int resultado;
	
	puts("Digite uma frase: ");
	fgets(str1,100,stdin);
	fflush(stdin);
	
	puts("Digite outra frase: ");
	fgets(str2,100,stdin);
	fflush(stdin);
	
	resultado = strcmp(str1,str2);
	
	if(strlen(str1) == strlen(str2)){
		if(resultado == 0){
			puts("As duas palavras digitadas sao iguais.");
		}
	}else{
		puts("As duas palavras digitadas sao diferentes.");
	}
	
	
}