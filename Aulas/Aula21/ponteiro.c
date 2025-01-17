#include <stdio.h>

void main(){
	int a = 3;
	
	int *p = NULL; //declarando um ponteiro que ainda não está apontando para nada
	
	p = &a; //definindo que p aponta para o endereço de memória da variavel a
	
	printf("conteudo de A: %d\n",*p);
	printf("endereco de memoria de A: %x",p);
}

/*Os ponteiros são variáveis que armazenam o endereço de memória de outras variáveis.​

Sintaxe: tipo *variavel;​

Ex: int *p = &a;*/