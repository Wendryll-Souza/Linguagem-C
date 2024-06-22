//Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

#include <stdio.h>

int main(){
	int numero,resultado;
	
	printf("Deseja imprimir a tabuada de qual numero? ");
	scanf("%d", &numero);
	
	if(numero > 0 && numero < 10){
		for(int i=0;i <= 10;i++){
			resultado = numero * i;
			printf("%d X %d = %d\n", numero, i ,resultado);
		}		
	}else {
		printf("Valor invalido! Digite um valor entre 1 e 9.");
	}
}