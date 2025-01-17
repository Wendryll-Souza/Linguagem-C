/*Faça um programa que carregue uma matriz
10x3 com as três notas de dez alunos. Mostre um relatório com o número do aluno
(número da linha) e a prova em que cada aluno obteve menor nota. Ao final do relatório,
mostre quantos alunos tiveram menor nota na prova 1, quantos alunos tiveram menor
nota na prova 2 e quantos alunos tiveram menor nota na prova 3.*/

#include <stdio.h>

void main(){
	int i, j, p_menor, qtd_1 = 0, qtd_2 = 0, qtd_3 = 0;
	float notas[10][3];
	float menor_nota;
	
	/*recebendo as notas dos alunos*/
	for(i = 1;i <= 10;i++){
		for(j = 1; j <= 3; j++){
			printf("Inseira a nota %d do aluno %d: ",j,i);
			scanf("%d",&notas[i][j]);	
		}
	}
	
	//contando a quantidade de menores notas em cada prova
	for(i = 1; i <= 10; i++){
		
		printf("Aluno %d \n",i);
		menor_nota = notas[i][0];
		p_menor = 1;
		for(j = 1; j <= 3; j++){		
			if(menor_nota > notas[i][j]){
				menor_nota = notas[i][j];
				p_menor += 1;
			}
		}
		printf("Prova de menor nota: %d \n",p_menor);
		switch(p_menor){
			case 1:
				qtd_1++;
				break;
			case 2:
				qtd_2++;
				break;
			case 3:
				qtd_3++;
				break;
		}
	}
	
	printf("Quantidade de alunos com notas menores na primeira prova: %d \n",qtd_1);
	printf("Quantidade de alunos com notas menores na segunda prova: %d \n",qtd_2);
	printf("Quantidade de alunos com notas menores na terceira prova: %d \n",qtd_3);	
}