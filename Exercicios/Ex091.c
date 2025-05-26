/*Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considerando como Taxa de cambio US$ 1,0 = R$5,30.
Leia o valor em Reais e mostre o correspondente em Dólares*/

#define CAMBIO 5.3;

int main(){
	float reais = 0;
	float dolar = 0;
	
	printf("Conversao de Dolar para Real\n");
	printf("Digite o valor em Reais: R$");
	scanf("%f",&reais);
	
	dolar = reais / CAMBIO;
	
	printf("O Valor correspondete em Dolares e US$%.2f",dolar);
	
	return 0;
}