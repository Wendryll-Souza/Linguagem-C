/* Desenvolva um programa em linguagem C que calcule a soma dos elementos de um array de números inteiros (int), obrigatoriamente utilizando ponteiros. */

#include <stdio.h>

//declarando a função CalcularSoma
void calcularSoma(int *array,int tamanho,int *soma);

void main(){
	//definindo um array com os valores 8,15,22,35,41.
	int vet[] = {8,15,22,35,41};
	
	//Criando uma variavel chamada soma 
	int soma = 0;
	
	//criando uma variavel tamanhoVetor que por meio da função sizeof retorna o tamanho do meu vetor
	int tamanhoVetor = sizeof(vet) / sizeof(vet[0]);
	
	//chamada da função calcularSoma que exibe uma saída de dados com a soma de todos os elementos do vetor
	calcularSoma(vet,tamanhoVetor,&soma);
}

void calcularSoma(int *array, int tamanho, int *soma){
	
	int i; //inicializando um contador
	
	//declarando um loop de repetição que vai do contador iniciado em 0 ao tamanho do vetor - 1
	for(i=0; i < tamanho; i++){ 
		//somando ao conteudo do ponteiro soma o conteudo do ponteiro array na primeira posição
		*soma += *array;
		
		//pulando o ponteiro para a proxima posição do vetor
		array += 1;
	}
	//Exibindo na tela o resultado final da soma dos valores contida dentro do ponteiro soma
	printf("A soma dos valores: %d",*soma);

}
