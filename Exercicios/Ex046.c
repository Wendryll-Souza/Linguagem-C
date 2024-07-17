/*Faça um programa que receba a hora de
início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras:
hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o
tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e
terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min
até as 23hr29min.*/

#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int hora_inicio,minuto_inicio;
	int hora_termino, minuto_termino;
	int hora_partida = 0;
	int minuto_partida = 0;
	
	printf("Dados do inicio da partida.\n");
		
	printf("horas: ");
	scanf("%i",&hora_inicio);
	
	printf("Minutos: ");
	scanf("%i",&minuto_inicio);
	
	printf("Dados do fim da partida.\n");
	
	printf("Horas: ");
	scanf("%i",&hora_termino);
	
	printf("Minutos: ");
	scanf("%i",&minuto_termino);
	
	if(minuto_inicio > minuto_termino){
		minuto_termino = minuto_termino + 60;
		hora_termino = hora_termino - 1;
	}else if(hora_inicio > hora_termino){
		hora_termino = hora_termino + 24;
	}
	
	minuto_partida = minuto_termino - minuto_inicio;
	hora_partida = hora_termino - hora_inicio;
	
	printf("Duracao %d hr %d min",hora_partida,minuto_partida);
}