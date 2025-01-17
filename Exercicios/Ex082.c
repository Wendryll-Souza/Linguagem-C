/*O custo de um carro novo ao consumidor
final é o preço de fábrica somado ao percentual de lucro do distribuidor, acrescido dos
impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de
fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos.
Em cada item, crie uma função distinta para calcular e retornar:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.
Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada
uma das funções, mostrando o lucro do distribuidor, os impostos e o valor final do
veículo.*/

#include <stdio.h>

//função para calculo do lucro
float lucro(float percentual,float valor);

float imposto(float percentual, float valor);

float valorFinal(float valor, float lucro,float imposto);

void main(){
	float preco_fabrica = 0;
	float percentual_lucro = 0;
	float percentual_imposto = 0;
	float exibe_lucro = 0;
	float exibe_imposto = 0;
	float exibe_total = 0;
	
	printf("Insira o preco de fabrica: ");
	scanf("%f",&preco_fabrica);
	fflush(stdin);
	
	printf("Insira a porcentagem de lucro do distribuidor: ");
	scanf("%f",&percentual_lucro);
	fflush(stdin);
		
	printf("Insira a porcentagem de imposto: ");
	scanf("%f",&percentual_imposto);
	fflush(stdin);
	
		
	exibe_lucro = lucro(percentual_lucro,preco_fabrica);
	printf("Lucro do distribuidor: R$ %.2f",exibe_lucro);
	
	exibe_imposto = imposto(percentual_imposto,preco_fabrica);
	printf("\nImposto: R$ %.2f",exibe_imposto);
	
	exibe_total = valorFinal(preco_fabrica,exibe_lucro,exibe_imposto);
	printf("\nValor Final: R$ %.2f",exibe_total);
}

float lucro(float percentual,float valor){
	float r;
	r = (percentual / 100) * valor;
	
	return r;
}

float imposto(float percentual, float valor){
	float r;
	r = (percentual / 100) * valor;
	
	return r;
}

float valorFinal(float valor, float lucro,float imposto){
	float r;
	r = valor + lucro + imposto;
	
	return r;
}