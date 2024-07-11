/*A nota final de um estudante é calculada a
partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma
avaliação semestral e a um exame final. A média das três notas mencionadas
anteriormente obedece aos pesos a seguir:
Nota Peso
Trabalho de laboratório 2
Avaliação semestral 3
Exame final 4
Faça um programa que receba as três notas, calcule e mostre a média ponderada e o
conceito que segue a tabela abaixo:
Média ponderada Conceito
8,0 ~ 10,0 A
7,0 ~ 8,0 B
6,0 ~ 7,0 C
5,0 ~ 6,0 D
0,0 ~ 5,0 E*/


#include <stdio.h>

void main(){
	float tb_laboratorio, av_semestral, ex_final,media;
		
	printf("Digite a nota do trabalho de laboratorio: ");
	scanf("%f",&tb_laboratorio);	
	
	printf("Digite a nota da avaliacao semestral: ");
	scanf("%f",&av_semestral);
	
	printf("Digite a nota do exame final: ");
	scanf("%f",&ex_final);
	
	media = ( (tb_laboratorio * 2) + (av_semestral * 3) + (ex_final * 4) ) / (2 + 3 + 4);
	
	printf("Media ponderada: %.2f\n",media);

	if(media <= 5.0){
		printf("Conceito E");
	}else if(media > 5.0 && media < 6.0){
		printf("Conceito D");
	}else if(media >= 6.0 && media < 7.0){
		printf("Conceito C");
	}else if(media >= 7.0 && media < 8.0){
		printf("Conceito B");
	}else{
		printf("Conceito A");
	}
}