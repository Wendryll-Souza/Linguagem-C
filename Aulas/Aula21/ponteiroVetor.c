#include <stdio.h>

//Função para exibir um Vetor
void exibirVetor(int *vetor, int tamanho){ //criando um ponteiro para nosso vetor e uma variavel do tipo inteiro
	
	printf("Dados do vetor: ");
	for(int i=0; i < tamanho; i++){ //criando um for que percorre de zero ao tamanho - 1
		printf("[%d]",*vetor); //exibindo o dado da posição atual do vetor
		vetor += 1; //incrementando uma posição ao vetor
	}
	
}

//Função para exibir um vetor de trás para frente
void exibirVetorContrario(int *vetor, int tamanho){
	vetor += tamanho - 1; //posicionando o vetor em sua ultima posição.
	
	printf("Dados do vetor de tras para frente: ");	
	for(int i=0; i < tamanho; i++){
		printf("[%d]",*vetor);
		vetor -= 1; //voltando uma posição do vetor
	}
}

//Função para exibir paraes
void exibirPares(int *vetor, int tamanho){
	
	printf("Dados pares do vetor: ");
	for(int i=0; i < tamanho; i++){
		if(*vetor % 2 == 0){
			printf("[%d]",*vetor);
		}
		vetor += 1;
	}
}

void main(){
	int vet[] = {1,2,3,4,5,6,7,8,9,10};
	int tamVetor = sizeof(vet) / sizeof(vet[0]);
	
	exibirVetor(vet,tamVetor);
	printf("\n");
	exibirVetorContrario(vet,tamVetor);
	printf("\n");
	exibirPares(vet,tamVetor);
}