/*Elabore um algoritmo que receba, por meio do teclado dois valores, um para a variavel "a" e um para a variavel "b". Em seguida, faça os passos que julgue necessário 
para que ao final, a variável "a" possua o valor que inicialmente estava em "b" e a variavel b possua o valor que inicialmente estava na variavel "a". Traduza seu algoritmo 
para a linguagem c e exiba os valores na tela.*/

#include <stdio.h>


int main(){
	int num_a, num_b, num_c = 0;
	
	printf("Digite um valor para A: ");
	scanf("%d",&num_a);
	
	printf("Digite um valor para B:");
	scanf("%d",&num_b);
	
	printf("Valor contido em A: %d \nValor contido em B: %d\n",num_a,num_b);
	
	//trocando valores
	num_c = num_a;
	num_a = num_b;
	num_b = num_c;
	
	printf("\n");
	printf("Valor contido em A depois da troca: %d\nValor contido em B depois da troca: %d",num_a,num_b);
}
