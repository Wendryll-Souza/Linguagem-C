/*Faça um programa na linguagem C que colete 20 números inteiros,
 armazene cada valor em um vetor. Ao final, mostre todos os valores, em seguida, quais são os números pares e quantos são pares*/
 
 #include <stdio.h>
 
 #define QTD 20
 
 void main(){
 	int numeros[QTD];
 	int i;
 	int qtd_pares = 0;
 	
 	//armazenando valores no vetor
 	for(i=0;i < QTD;i++){
		printf("Digite um numero para a posicao %i do vetor: ",i);
		scanf("%i",&numeros[i]); 		
	}
	
	printf("\nNumeros: ");
	
	//exibindo os valores do vetor
	for(i=0;i < QTD;i++){
		printf("%i \t",numeros[i]);
	}
	
	printf("\nNumeros pares digitados: ");
	
	for(i=0;i < QTD;i++){
		if(numeros[i] % 2 == 0){
			qtd_pares += 1;
			printf("%i \t",numeros[i]);
		}
	}
	
	printf("\nForam digitados %i numeros pares.",qtd_pares);
 }