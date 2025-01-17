#include <stdio.h>

void main(){
	char nome[10];
	char texto[50] = "Oi eu sou um texto armazenado em uma variavel";

	//Trabalhando com scanf simples
	printf("Digite seu nome: ");
	scanf("%s",nome); // leitura de dados pelo teclado, porem o mesmo não limita a quantidade de dados digitados, será armazenado tudo que for digitado até que se encontre o caracter ' ' ou '\n'
	printf("Foi digitado: %s \n", nome);
	fflush(stdin); //Limpa o buffer para não ficar lixo de memoria para a proxima leitura.
	
	//trabalhando com scanf aprimorado.
	printf("Digite seu nome: ");
	scanf("%9[^\n]s",nome); // leitura de dados pelo teclado usando scanf aprimorado, limitando a quantidade de caracteres que seram armazenados
	printf("Foi digitado: %s",nome);
	fflush(stdin);//Limpa o buffer para não ficar lixo de memoria para a proxima leitura.
	
	//trabalhando com gets
	printf("Digite seu nome: ");
	gets(nome); //leitura de dados com gets, finaliza a leitura de uma string apenas quando encontra o caracter \n, porem não limita a quantidade de dados armazenados
	printf("Foi digitado: %s \n",nome);
	fflush(stdin);
	
	//trabalhando com fgets
	printf("Digite seu nome: ");
	fgets(nome,10,stdin); // leitura de dados com fgets, finaliza a leitura apenas quando encontra o caracter \n, porem limita a quantidade de dados armazenados e limpa o buffer atráves do stdin
	printf("Foi digitado: %s \n",nome);
	fflush(stdin);
	
	//trabalhando com puts
	puts("Ola eu sou um texto \n");//saida de dados com puts, usado para imprimir uma string na tela
	puts(texto); //puts aceita apenas variaveis do tipo char

}
	