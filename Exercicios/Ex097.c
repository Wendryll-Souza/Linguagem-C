/*Faça um programa que, dado três valores a, b, c, verifique se eles podem ser os comprimentos dos lados de um triangulo. Caso positivo, seu programa deve informar 
também se o triângulo é equilatero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem "não formam um triângulo"
Lembrete:
Equilatero - 3 lados iguais.
Isósceres - 2 lados iguais
Escaleno - 3 lados diferentes.
*/

#include <stdio.h>

void main(){
	float lado_a, lado_b, lado_c;
	int i;
	
	printf("Digite o valor do lado A: ");
	scanf("%f",&lado_a);
	
	printf("Digite o valor do lado B: ");
	scanf("%f", &lado_b);
	
	printf("Digite o valor do lado C: ");
	scanf("%f",&lado_c);
	
	//verificando a existencia de triângulo
	if((lado_a + lado_b) > lado_c && (lado_a + lado_c) > lado_b && (lado_b + lado_c) > lado_a){
		printf("\n\tE possivel formar um triangulo do tipo ");
		//verificando o tipo de triângulo
		
		//Equilatero
		if(lado_a == lado_b && lado_b == lado_c){
			printf("Equilatero"); 
		}else if(lado_a != lado_b && lado_a != lado_c && lado_b != lado_c){
			printf("Escaleno"); //Escaleno
		}else{
			printf("Isosceres"); //Isósceres
		}
	}else{
		printf("Nao e possivel formar um triangulo.");
	}
	
}

