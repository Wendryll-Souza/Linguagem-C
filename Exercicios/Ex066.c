/*Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Após
preencher todo o vetor, o usuário deve inserir uma chave de busca X. Caso exista algum
número igual a X, dentro do vetor, o algoritmo deve mostrar, na tela, o índice da
primeira posição na qual X foi encontrado. Caso contrário, o algoritmo deve se encerrar
com uma única mensagem, dizendo "Chave não encontrada.".*/

#include <stdio.h>
#include <stdbool.h>

void main(){
	int numeros[10];
	int i;
	int numero;
	int posicao;
	bool achou;
	int p;
	
	for(i=0; i < 10; i++){
		printf("Digite um valor para a %d posicao do vetor: ",i);
		scanf("%d",&numeros[i]);
	}
	
	printf("Insira um valor para buscar no vetor: ");
	scanf("%d",&numero);
	
	achou = false;
	
	for(i=0;i < 10; i++){
		if(numeros[i] == numero){
			achou = true;
			p = i;						
		}
	}
	if(!achou){
		printf("Chave nao encontrada!");
	}else{
		printf("Chava encontrada na posicao %d",p);
	}
}
