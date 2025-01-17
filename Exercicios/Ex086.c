/*Crie uma fução que inverta um vetor usando ponteiros*/

#include <Stdio.h>

//criando uma função que recebe um ponteiro referente a um vetor e seu tamanho.
void inverterVetor(int *vetor,int tamanho){
	int i; //criando um contador
	vetor += tamanho - 1; //posicionando nosso ponteiro na posição do último elemento do vetor

	for(i=0; i < tamanho; i++){
		printf("[%i]",*vetor); // exibindo conteudo do endereço de memoria da posição do vetor
		vetor -= 1; // voltando uma posição do vetor
	}
	
	
}

void main(){
	int vet[] = {1,2,3,4,5}; //inicializando um vetor com uma lista de inicialização
	int *p = vet; // declarando um ponteiro
	int qtd_elementos = sizeof(vet) / sizeof(vet[0]); // obtendo a quantidade de elementos de um vetor

	inverterVetor(vet,qtd_elementos);	//chamando a função para inverter o vetor
	
}