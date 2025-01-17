#include <stdio.h>

void main(){
	char letra = ' ';
	
	printf("Digite uma letra: ");
	setbuf(stdin,NULL); // Limpando o buffer de memória	
	letra = getchar(); //função getchar() le apenas um caractere
	
	printf("A letra digitada foi ");
	putchar(letra); //exibe na tela a saida de apenas um caracter
}