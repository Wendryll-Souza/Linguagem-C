//Lendo dados de arquivos
#include <stdio.h>

void main(){
	char mensagem[50]; 
	
	FILE *fp;
	
	fp = fopen ("arq.txt","r");
	
	fscanf(fp,"%s",&mensagem);
	printf("Conteudo do arquivo: %s",mensagem);
	
	fclose(fp);
}