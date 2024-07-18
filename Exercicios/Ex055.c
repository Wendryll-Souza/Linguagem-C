/*Desenvolva um algoritmo que peça para o usuário informar dois números. Após isso, o
algoritmo deve mostrar cálculo o primeiro número elevado ao segundo. Ao final, o
algoritmo deve perguntar se o usuário deseja repetir a operação. Caso o usuário insira
o caractere "s", o algoritmo solicita novamente dois números e mostra novamente a
potência do primeiro pelo segundo. Caso contrário, o algoritmo é encerrado.
*/

#include <stdio.h>
#include <math.h>

void main(){
	int num_um,num_dois,resposta;
	char repetir = 's';
	
	do{
		printf("Digite o primeiro numero: ");
		scanf("%d",&num_um);
		
		printf("Digite o segundo numero: ");
		scanf("%d",&num_dois);
		
		resposta = pow(num_um,num_dois);
		printf("A elevado a B: %d\n",resposta);
		
		printf("Deseja repetir a operacao [s/n]: ");
		scanf("%s",&repetir);
		
	}while(repetir != 'n');
}