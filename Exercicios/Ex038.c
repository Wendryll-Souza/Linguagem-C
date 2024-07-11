/*Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um
retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0,
calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op",
calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1
para "op", mostrar a mensagem "Opção inválida.".*/


#include <stdio.h>

void main(){
	float base,altura,area,perimetro;
	int op;
	
	printf("Digite a base do retangulo: ");
	scanf("%f",&base);
	printf("Digite a altura do retangulo: ");	
	scanf("%f",&altura);
	
	printf("0 - Perimetro do retangulo.\n");
	printf("1 - area do triangulo.\n");
	
	printf("Digite sua opcao: ");
	scanf("%d",&op);
	
	if(op == 0){
		perimetro = (base * 2)+(altura * 2);
		printf("O perimetro do retangulo e %.2f",perimetro);
	}else if(op == 1){
		area = base * altura;
		printf("A area do retangulo e %.2f",area);
	}else{
		printf("Opcao invalida!");
	}
}