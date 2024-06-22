//Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
//imprime no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.
// a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula  C=(f-32.0) * (5.0/9.0).
// b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
// C=(f-32)*(5/9).

#include <stdio.h>

int main(){
	float f, resposta_a, resposta_b;	
	int ff;
	
	
	//resposta a
	printf("Digite o valor (numero flutuante) em Fahrenheit: ");
	scanf("%f", &f);
	
	resposta_a = (f - 32.0) * (5.0 / 9.0);
	
	printf("Resposta: A) %.2f C convertido em Fahrenheit e igual a %.2f\n", f, resposta_a);

	//resposta b
	printf("Digite o valor (numero inteiro) em Fahrenheit: ");
	scanf("%d", &ff);
	
	resposta_b = (ff - 32) * (5 / 9);
	
	printf("Resposta: B) %d convertido em Fahrenheit e igual a %.2f\n", ff, resposta_b);
}

