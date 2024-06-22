//Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros

#include <stdio.h>

int main(){
	float metro, decimetro, centimetro, milimetro;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &metro);
	
	//calculando decimetros
	decimetro = metro * 10;
	
	printf("Medidas convertidas\n");
	printf("Decimetros: %.1f\n", decimetro);
	
	//calculando centimetros
	centimetro = metro * 100;
	
	printf("Centimetros: %.1f\n", centimetro);
	
	//calculando milimetros
	milimetro = metro * 1000;
	
	printf("Milimetros: %.1f\n",milimetro);
}