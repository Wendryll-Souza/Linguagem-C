/*Faça um programa que seja capaz de armazenar os dados de três pessoas: nome, idade,
peso e altura. Ao final, o algoritmo deve mostrar, na tela, o nome e a idade da primeira
pessoa e o peso e altura da última pessoa.
*/

#include <stdio.h>

#define TAM 3

struct pessoas{//criando uma struct para armazenar dados
	char nome[50];
	int idade;
	float peso;
	float altura;
};

typedef struct pessoas pessoas; //renomeando nossa estrutura para apenas pessoas

void main(){
	pessoas pessoa[TAM]; //inicializando nossa struct com valores padrão.
	int i;
	
	for(i=0; i<TAM; i++){
		printf("Insira os dados da %d pessoa: \n",i);
		//Armazenando o nome
		printf("Nome: ");
		fgets(pessoa[i].nome,50,stdin);
		fflush(stdin);
		
		//Armazenando a idade
		printf("Idade: ");
		scanf("%i",&pessoa[i].idade);
		fflush(stdin);
		
		//Armazenando o peso
		printf("Peso: ");
		scanf("%f",&pessoa[i].peso);
		fflush(stdin);
		
		//Armazenando a altura
		printf("Altura: ");
		scanf("%f",&pessoa[i].altura);
		fflush(stdin);
	}

	printf("Nome da primeira pessoa: %s\n",pessoa[0].nome);
	printf("Idade da primeira pessoa: %i\n",pessoa[0].idade);
	printf("Peso da ultima pessoa: %.2f\n",pessoa[2].peso);
	printf("Altura da ultima pessoa: %.2f",pessoa[2].altura);

}