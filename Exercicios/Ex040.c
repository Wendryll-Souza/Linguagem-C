/*Faça um programa que receba três notas de
um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo.
Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para
aprovação, considerando que a média no exame é 6,0.
Média aritmética Mensagem
0,0 ~ 3,0 Reprovado
3,0 ~ 7,0 Exame
7,0 ~ 10,0 Aprovado*/

#include <stdio.h>

void main(){
	float nota_um,nota_dois,nota_tres,media,nota_faltante;
	int i;

	printf("Digite a primeira nota: ");
	scanf("%f",&nota_um);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota_dois);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&nota_tres);
	
	media = (nota_um + nota_dois + nota_tres) / 3;
	
	printf("Media aritmetica: %.2f\n",media);
	
	if(media < 3.0){
		printf("Status: Reprovado");
	}else if(media >= 3.0 && media < 7.0){
		
		nota_faltante = 7.0 - media;
	
		printf("Status: Exame\n");
		printf("Para voce estar aprovado falta %.2f pontos da media",nota_faltante);
	}else{
		printf("Status: Aprovado");
	}
}	