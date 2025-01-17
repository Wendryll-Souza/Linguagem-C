#include <stdio.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

void main(){
	int i;
	tipo_pessoa lista[TAM];
	
	for(i=0; i<TAM; i++){
		printf("Insira os dados (%d):\n",i+1);
		puts("Nome: ");
		scanf("%50[^\n]s",&lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%i",&lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f",&lista[i].peso);
		fflush(stdin);
	
	}
	
	system("cls"); //usado para apagar os dados da tela
	
	printf("Seus dados:\n");
	for(i=0; i<TAM; i++){
		printf("-------------Pessoa %d-------------\n",i+1);
		printf("\tNome: %s\n",lista[i].nome);
		printf("\tIdade: %i\n",lista[i].idade);
		printf("\tPeso: %.2f\n",lista[i].peso);
	}
	printf("---------------------");
}