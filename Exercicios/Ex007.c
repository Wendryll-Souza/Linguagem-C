//Escreva um programa que leia três valores e apresente qual é o maior e qual é o menor.

#include <stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Digite tres valores: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a > b && b > c){
		printf("O maior valor e %d e o menor e %d",a,c);
	}else if(a > c && c > b){
		printf("O maior valor e %d e o menor e %d",a,b);
	}else if(b >a && a > c){
		printf("O maior valor e %d e o menor e %d",b,c);
	}else if(b > c && c > a ){
		printf("O maior valor e %d e o menor e %d",b,a);
	}else if(c > a && a > b){
		printf("O maior valor e %d e o menor e %d",c,b);
	}else if(c > b && b > a){
		printf("O maior valor e %d e o menor e %d",c,a);
	}else{
		printf("Todos os valores sao iguais");
	}
}