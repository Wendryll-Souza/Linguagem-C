//Manipulação de arquivos

#include <stdio.h>

void main(){
	FILE *fp;
	
	fp = fopen("arq.txt","w"); //abrindo o arquivo arq.txt no modo de escrita.
	
	if(fp == NULL){ // verificando se o arquivo foi aberto com sucesso se sim retorna uma mensagem positiva, se não, retorna uma negativa.
		printf("Erro na abertura do arquivo.");
	}else{
		printf("Arquivo aberto com sucesso.");
	}
	
	fclose(fp);	// fechando o arquivo arq.txt
}