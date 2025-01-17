#include <stdio.h>

void main(){
	
	char nome[20] = "";
	char *p = nome;
	printf("Digite seu nome: ");
	scanf("%19[^\n]s",nome);
	

	
	printf("Conteudo em p: %s \nEndereco em p: %x",p,*p);
}