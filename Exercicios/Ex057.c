/*Faça um programa que leia dez conjuntos de
dois valores, o primeiro representando o número do aluno e o segundo representando
sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número
do aluno mais alto e o número do mais baixo, junto com suas alturas.*/

#include <stdio.h>

void main(){
	int num_aluno,num_maior,num_menor;
	float altura_aluno,altura_maior,altura_menor;
	int i;
	
	for(i=0;i < 10;i++){
		printf("Digite o numero do aluno: ");
		scanf("%d",&num_aluno);
		
		printf("Digite a altura do aluno: ");
		scanf("%f",&altura_aluno);

		if(i == 0){
			num_maior = num_aluno;
			num_menor = num_aluno;
			altura_maior = altura_aluno;
			altura_menor = altura_aluno;
		}else if(altura_maior < altura_aluno){
			altura_maior = altura_aluno;
			num_maior = num_aluno;
		}else if(altura_menor > altura_aluno){
			num_menor = num_aluno;
			altura_menor = altura_aluno;
		}
	}
	printf("Numero do maior aluno: %d\n",num_maior);
	printf("Altura do maior aluno: %.2f\n",altura_maior);
	printf("Numero do menor aluno: %d\n",num_menor);
	printf("Altura do menor aluno: %.2f\n",altura_menor);
}