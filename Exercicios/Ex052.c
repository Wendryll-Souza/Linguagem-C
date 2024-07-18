/*Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em média 2,1 centímetros
ao ano. Seu irmão, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em média 1,1
centímetro por ano. Elabore um programa que conte quantos anos serão necessários
para que a altura de Charlinho ultrapasse a de Bossa.*/

#include <stdio.h>

void main(){
	
	float charlinho = 1.40;
	float bossa = 1.45;
	int anos = 0;
	
	while(charlinho <= bossa ){
		charlinho += 0.021;
		bossa += 0.011;
		anos += 1;
	}
	
	printf("Serao necessarios: %d anos.",anos);	
}