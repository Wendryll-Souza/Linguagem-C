/* Desenvolva um algoritmo que peça para o usuário inserir vários números inteiros. O
algoritmo deverá contabilizar a quantidade de números positivos informados. Caso o
usuário digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar.*/

#include <stdio.h>

void main(){
	int tot_pos;
	int num;
	char sair = 'n';
	
	while(sair != 's'){
		printf("Insira um numero: ");
		scanf("%d",&num);
		
		if(num > 0){
			tot_pos += 1;
		}else if(num == 0){
			sair = 's';
		}
	}
	printf("Quantidade de positivos: %d",tot_pos);
}