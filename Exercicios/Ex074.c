/*Desenvolva um algoritmo que preencha uma matriz numérico de dimensões 3x3. Após
preencher todo a matriz, o usuário deve inserir uma chave de busca X. Caso exista algum
número igual a X, dentro da matriz, o algoritmo deve mostrar, na tela, os índices da linha
e da coluna da posição na qual na qual X foi encontrado pela primeira vez. Caso
contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não
encontrada.".*/

#include <stdio.h>
#include <stdbool.h>

void main(){
	int matriz[3][3];
	int i, j,numero = 0, coluna, linha;
	bool achou = false;
	
	//populando o vetor.
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			printf("Digite um valor para a posicao [%d , %d] do vetor: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	printf("\n"); //pulando uma linha
	
	//pedindo um valor para o usuario
	printf("Digite um numero para procuralo na matriz: ");
	scanf("%d",&numero);

	/*Percorrendo a matriz e verificando se cada uma das posicoes corresponde ao valor difitado, em caso afirmativo 
	colocamos os indices referentes a linha e coluna em variaveis e trocamos o valor da variavel achou para true*/
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			if(numero == matriz[i][j]){
				linha = i;
				coluna = j;
				achou = true;
			}
		}	
	}
	
	//exibindo a mensagem ao usuario baseado no valor da variavel achou
	if(achou == true){
		printf("Chave encontrada na linha: %d e coluna: %d",linha,coluna);
	}else if(achou == false){
		printf("Chave nao encontrada.");
	}

}