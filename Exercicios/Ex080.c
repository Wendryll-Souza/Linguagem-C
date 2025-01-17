/*Faça um programa que seja capaz de armazenar os dados de uma pessoa: nome, idade,
peso e altura. Seu programa deve ser capaz de armazenar 5 pessoas. Ao final dos
cadastros, o seu programa deve imprimir, na tela, todas as informações de todas as
pessoas. Seu programa deve mostrar, também, o nome da pessoa mais magra, nome da
pessoa mais baixa e a média das idades de todas as pessoas.
*/
#include <stdio.h>
#include <string.h>

#define TAM 5
//criando uma estrutura para cadastrar dados de pessoas: nome, idade, peso, altura
struct pessoas{
	char nome[50];
	int idade;
	float peso;
	float altura;
};

typedef struct pessoas pessoas;

void main(){
	char maisMagro[50] = " ";
	int menorPeso = 0;
	
	char maisBaixo[50] = " ";
	int menorAltura = 0;
	
	float mediaIdade = 0;
	int i;
	pessoas pessoa[TAM];
	
	//lendo dados
	for(i=0; i<TAM; i++){
		printf("Pessoa %i:\n",i+1);
		
		printf("Nome: ");//lendo e armazenando nome
		scanf("%50[^\n]s",&pessoa[i].nome);
		fflush(stdin);
		
		printf("Idade: ");//lendo e armazenando idade
		scanf("%i",&pessoa[i].idade);
		fflush(stdin);
		
		//calculando a somatoria das idades
		mediaIdade += pessoa[i].idade;
		
		printf("Peso: ");//lendo e armazenando peso
		scanf("%f",&pessoa[i].peso);
		fflush(stdin);
		
		//calculando o menor peso
		if(i == 0){
			menorPeso = pessoa[i].peso;
		}else if(menorPeso > pessoa[i].peso){
			menorPeso = pessoa[i].peso;
			strcpy(maisMagro,pessoa[i].nome);
		}
		
		printf("Altura: ");//lendo e armazenando altura
		scanf("%f",&pessoa[i].altura);
		fflush(stdin);
		
		//calculando a menor altura
		if(i == 0){
			menorAltura = pessoa[i].altura;
		}else if(menorAltura > pessoa[i].altura){
			menorAltura = pessoa[i].altura;
			strcpy(maisBaixo,pessoa[i].nome);
		}
		
		system("cls");
	}
	
	//exibindo dados
	for(i=0; i<TAM; i++){
		printf("Dados da pessoa %d\n",i+1);
		printf("Nome: %s\n",pessoa[i].nome);
		printf("Idade: %i\n",pessoa[i].idade);
		printf("Peso: %.2f\n",pessoa[i].peso);
		printf("Altura: %.2f\n",pessoa[i].altura);
		printf("===============================\n");
	}
	printf("Nome da pessoa mais magra %s\n",maisMagro);
	printf("Nome da pessoa mais baixa %s\n",maisBaixo);
	printf("Media das idades: %.1f",mediaIdade/5);
}