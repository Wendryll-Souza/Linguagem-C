/* Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de
uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule
e mostre as raízes da respectiva equação de segundo grau.
*/

#include <stdio.h>
#include <math.h>
void main(){
	
	int a,b,c;
	float delta,x1,x2;
	
	printf("Calculo de equacao de segundo grau.\n");
	
	printf("Digite o valor de A: ");
	scanf("%i",&a);
	
	printf("Digite o valor de B: ");
	scanf("%i",&b);
	
	printf("Digite o valor de C: ");
	scanf("%i",&c);
	
	delta = (b*b) - 4 * a * c;
	
	if(delta <= 0){
		printf("Valor fora dos numeros reais\n");
	}else{
		x1 = (- b + sqrt(delta)) / (2 * a);
		x2 = (- b - sqrt(delta)) / (2 * a);	
		printf("Raiz X' : %.1f\n",x1);
		printf("Raiz X'' : %.1f",x2);
	}
	
}