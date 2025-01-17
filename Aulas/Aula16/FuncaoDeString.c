#include <stdio.h>
#include <string.h> //biblioteca de funcionalidades para string
#include <locale.h> //biblioteca para acentuação


void main(){
	setlocale(LC_ALL, "Portuguese");

	char nome[10] = "Rafael";
	char str1[10] = "Bom ";
	char str2[10] = "dia!";
	char str3[] = "Bom dia!";
	int tamanho = 0;
	
	
	
	//strcpy para trocar o valor de uma string
	strcpy(nome,"Aline"); //strcpy trocou o valor da string de Rafael para Aline
	
	puts(nome);
	
	//strlen para exibir e capturar o tamanho da string;
	tamanho = strlen(nome);
	printf("tamanho da string: %i \n",tamanho);

	//strcat para concatenar strings, neste exemplo juntamos o conteudo da str1 com o da str2
	strcat(str1,str2);
	puts(str1);
	
	//strcmp para comparar string, se forem iguais retorna zero caso contrario retorna outro valor
	if(strcmp(str1,str3) == 0){
		puts("Strings iguais");
	}else{
		puts("Strings diferentes.");
	}
	
	//setlocale para aceitar acentuação
	puts("Olá, tudo bem com você?");
	
}