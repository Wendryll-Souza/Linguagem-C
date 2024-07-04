/*Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos.
Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em
segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo
cronometrado.*/

#include <stdio.h>

void main(){
	int numero_usuario = 0;
	int horas = 0;
	int minutos = 0;
	int segundos = 0;
	int valor_x = 0;

	printf("Digite o tempo em segundos [Ex250]: ");
	scanf("%i",&numero_usuario);
	
	
	segundos = numero_usuario % 60;
	valor_x = numero_usuario / 60;
	
	minutos = valor_x % 60;
	horas = valor_x / 60;
	printf("Horas: %d\nMinutos: %d\nSegundos: %d",horas,minutos,segundos);
}