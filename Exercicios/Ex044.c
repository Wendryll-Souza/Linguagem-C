/*Faça um programa que receba quatro
valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos.
Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado
para I seja sempre um valor válido, ou seja, 1, 2 ou 3.*/

#include <stdio.h>

void main(){
	
	//área das variáveis 
	int i;
	float a,b,c;
	float maior = 0;
	
	//exibindo o menu	
	printf("Menu\n");
	printf("1 - Ordem crescente\n");
	printf("2 - Ordem decrescente\n");
	printf("3 - O maior fica entre os outros dois\n");
	
	printf("Digite o valor de (A): ");
	scanf("%f",&a);

	if(maior < a){
		maior = a;
	}

	printf("Digite o valor de (B): ");
	scanf("%f",&b);

	if(maior < b){
		maior = b;
	}
	
	printf("Digite o valor de (C): ");
	scanf("%f",&c);

	if(maior < c){
		maior = c;
	}
	
	printf("Digite a opcao: ");
	scanf("%d",&i);
	
	if(i == 1){
		if(a < b && b < c){
			printf("%.1f -> %.1f -> %.1f",a,b,c);
		}else if(a < c && c < b){
			printf("%.1f -> %.1f -> %.1f",a,c,b);
		}else if(b < a && a < c){
			printf("%.1f -> %.1f -> %.1f",b,a,c);
		}else if(b < c && c < a){
			printf("%.1f -> %.1f -> %.1f",b,c,a);
		}else if(c < a && a < b){
			printf("%.1f -> %.1f -> %.1f",c,a,b);
		}else{
			printf("%.1f -> %.1f -> %.1f",c,b,a);
		}
	}else if(i == 2){
		if(a > b && b > c){
			printf("%.1f -> %.1f -> %.1f",a,b,c);
		}else if(a > c && c > b){
			printf("%.1f -> %.1f -> %.1f",a,c,b);
		}else if(b > a && a > c){
			printf("%.1f -> %.1f -> %.1f",b,a,c);
		}else if(b > c && c > a){
			printf("%.1f -> %.1f -> %.1f",b,c,a);
		}else if(c > a && a > b){
			printf("%.1f -> %.1f -> %.1f",c,a,b);
		}else{
			printf("%.1f -> %.1f -> %.1f",c,b,a);
		}
	}else if(i == 3){
		if(maior == a){
			printf("%.1f - %.1f - %.1f",b,a,c);
		}else if(maior == b){
			printf("%1.f - %.1f - %.1f",a,b,c);	
		}else{
			printf("%1.f - %.1f - %.1f",a,c,b);
		}
	}
}