/*Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Ao final, o
algoritmo deve mostrar o somatório de todos os elementos do vetor, bem como a média
aritmética entre todos os termos.*/

void main(){
	int numeros[10];
	int i;
	int somatorio = 0;
	float media = 0;
	
	for(i=0;i < 10;i++){
		printf("Digite um valor inteiro para a posicao %i do vetor: ",i);
		scanf("%i",&numeros[i]);
	}
	
	for(i=0;i < 10;i++){
		somatorio += numeros[i];
	}
	media = (float)somatorio / 10;
	printf("Somatorio: %d\n",somatorio);
	printf("Media: %.1f",media);
}