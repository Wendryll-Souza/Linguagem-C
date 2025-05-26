//Escreva um programa que repita a leitura de uma senha até que ela sejá válida. Para cada leitura de senha incorreta, escreva a mensagem "Senha Inválida"
//quando a senha a senha for informada corretamente, escreva a mensagem "Acesso permitido" e o programa deve encerrar.

#include <stdio.h>
#include <string.h>

void main(){
	char senha[8];
	char tentativa[8];
	int op;
	
	printf("\t0 - Cadastrar senha\n\t1 - Logar\n\t2 - Sair\n");
	
	printf("\nDigite sua opcao: ");
	scanf("%d",&op);
	
	if(op == 0){
		printf("Cadastre sua senha de 8 caracteres: ");
		setbuf(stdin,NULL);
		scanf("%8[^\n]s",senha);
	}else if(op == 1){
		do{
			printf("Digite sua senha: ");
			setbuf(stdin,NULL);
			scanf("%s",tentativa);	
		}while(strcmp(senha,tentativa));
		
		printf("Acesso permitido");
		
		
	}else if(op == 2){
		printf("Encerrando...");
	}
}