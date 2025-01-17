#include <stdio.h>

void main(){
	int a=3, b=1, c=2, *p1=NULL, *p2=NULL;
	
	p1 = &a;
	p2 = &b;
	
	printf("Conteudo apontado por p1: %d\n",*p1);
	printf("endereco de memoria apontado por p1: %x\n",p1);
	printf("Conteudo apontado por p2: %d\n",*p2);
	printf("endereco de memoria apontado por p2: %x\n",p2);
	
	p1 = &c;
	
	printf("Novo conteudo apontado por p1: %d\n",*p1);
	printf("Novo endereco de memoria apontado por p1: %x\n",p1);
}