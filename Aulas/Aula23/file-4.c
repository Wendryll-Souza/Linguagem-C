//outros comandos de manipulação

#include <stdio.h>

void main(){
	FILE *fp;
	char mensagem[50];
	char letra = 'b';
	int validar;
	
	fp = fopen("arq.txt","a+"); //usando o modo de acesso A que acrescenta o novo conteudo ao final do conteudo já existente no arquivo.
	
	if(fp != NULL){ //verificando se o arquivo foi aberto corretamente
		printf("Arquivo aberto corretamente.\n");
	}else{
		printf("Erro! Arquivo nao foi aberto corretamente.\n");
	}
	
	printf("Digite algo para armazenar no arquivo txt: ");
	scanf("%50[^\n]s",&mensagem); //recebendo uma string do usuario e armazenando em uma variavel
	
	validar = fputs(mensagem,fp); //escrevendo no arquivo
	
	if(validar == EOF){ //validando se a função fputs gravou com sucesso os dados no arquivo de texto
		printf("Erro ao gravar dados.\n");
	}else{
		printf("Dados gravados com sucesso.\n");
	}
	
	fputc(letra,fp); //usado para gravar uma unica letra na tela
	
	fclose(fp);
}