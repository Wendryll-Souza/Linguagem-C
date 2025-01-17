//Escrevendo em arquivos

#include <stdio.h>

void main(){
	char mensagem[] = "Ola, Mundo!";
	
	FILE *fp; //criando o ponteiro do tipo FILE
	
	fp = fopen("arq.txt","w"); //abrindo o arquivo arq.txt no modo W para escrita
	
	fprintf(fp,"%s",mensagem); //escrevendo a mensagem contida na variavel mensagem no arquivo arq.txt
	
	fclose(fp); // fechando o arquivo
}