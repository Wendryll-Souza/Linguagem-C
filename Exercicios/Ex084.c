/*Pedro comprou um saco de ração para seus
gatos, com o peso em quilos. Faça uma função que receba o peso do saco de ração, em
quilos, o número de gatos e a quantidade de ração fornecida para cada gato por dia, em
gramas. A função deve retornar o total de quilos de ração restante no saco, após um dia
de consumo. Assim sendo, considerando que Pedro possui dois gatos, crie um algoritmo
que invoque a função recém criada para calcular e mostrar quanto restará de ração no
saco após cinco dias.
*/

#include <stdio.h>

float calc_racao(float kg, float qtd_gatos, float tm_porcao){
	float resto_racao = 0, porcao_diaria = 0;
	
	porcao_diaria = (tm_porcao/1000) * qtd_gatos;
	
	return resto_racao = kg - porcao_diaria;
}

void main(){
	float peso_racao = 0, porcao_diaria = 0,r = 0;
	int qtd_gatos = 0;
	
	
	puts("Qual o peso do saco de racao: ");
	scanf("%f",&peso_racao);
	
	puts("Qual o numero de gatos: ");
	scanf("%i",&qtd_gatos);
	
	puts("Peso da porcao diaria (gramas): ");
	scanf("%f",&porcao_diaria);

	r = calc_racao(peso_racao,qtd_gatos,porcao_diaria);
	r = calc_racao(r,qtd_gatos,porcao_diaria);
	r = calc_racao(r,qtd_gatos,porcao_diaria);
	r = calc_racao(r,qtd_gatos,porcao_diaria);
	r = calc_racao(r,qtd_gatos,porcao_diaria);
	
	printf("Apos 5 dias , sobraram: %.1f Kg de racao.", r);
}
