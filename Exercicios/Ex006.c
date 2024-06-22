#include <stdio.h>

int main(){
	double media;
	
	printf("Digite a media do Aluno: ");
	scanf("%if",&media);
	
	if (media <= 3){
		printf("Situacao: Reprovado.\n");
	} else if (media < 7){
		printf("Situacao: Exame.\n");
	} else{
		printf("Situacao: Aprovado.\n");
	}
}