/*Faça um programa que seja capaz de armazenar os dados de um produto: código, nome,
valor e quantidade. Seu programa deve ser capaz de armazenar 5 produtos. Ao final dos
cadastros, o usuário deve inserir o código de um produto e o seu programa deve
imprimir, na tela, as informações daquele produto. Caso o produto não se encontre
cadastrado, deve-se informar ao usuário a seguinte mensagem: "código não
encontrado".
*/

#include <stdio.h>
#include <stdbool.h>
#define TAM 5
struct produtos{
	int codigo;
	char nome[50];
	float valor;
	int quantidade;
};

typedef struct produtos produtos;

void main(){
	int i, pos,escolha = 0;
	bool achou = false;
	produtos produto[TAM];
	
	for(i=0; i<TAM; i++){ //lendo e armazenando os produtos
		printf("Dados do produto %d: \n",i+1);
			
		printf("Codigo: "); //lendo o código do produto
		scanf("%i",&produto[i].codigo);
		fflush(stdin);
		
		printf("Nome: "); //lendo o nome do produto
		scanf("%50[^\n]s",&produto[i].nome);
		fflush(stdin);
				
		printf("Valor: R$");//lendo o valor do produto
		scanf("%f",&produto[i].valor);
		fflush(stdin);
				
		printf("Quantidade: ");//lendo a quantidade do produto
		scanf("%i",&produto[i].quantidade);
		fflush(stdin);
		
		system("cls");
	}	
	
	printf("Digite o codigo de um produto para exibir suas informacoes: ");
	scanf("%i",&escolha);
	
	for(i=0; i<TAM; i++){
		if(escolha == produto[i].codigo){
			achou = true;
			pos = i;
		}
	}
	
	if(achou == true){
		printf("Nome: %s \t",produto[pos].nome);
		printf("Valor: R$ %.2f \t",produto[pos].valor);
		printf("quantidade: %i \t",produto[pos].quantidade);
	}else{
		printf("Codigo nao encontrado");
	}
}