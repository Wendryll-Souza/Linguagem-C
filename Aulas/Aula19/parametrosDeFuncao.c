#include <stdio.h>


//Função com parametro de vetor, aqui passamos um vetor como parametro e um segundo parametro que demostra o tamanho do vetor.
void imprime1(int v[], int n){
	int i;
	for(i = 0 ;i < n ;i++){
		printf("%d ",v[i]);
	}
}

//Função com parametro de vetor, aqui passamos um vetor como parametro já com seu tamanho declarado
void imprime2(int v[5]){
	int i;
	for(i = 0 ;i < 5 ;i++){
		printf("%d ", v[i]);	
	}
}

//função com parametro de vetor ao qual precisamos passar um segundo parametro que sera usado para mostrar seu tamanho.
void imprime3(int *v, int n){
	int i;
	for(i = 0 ;i < n ;i++){
		printf("%d ",v[i]);
	}	
}


void main(){
	int vet[5] = {1,2,3,4,5};
	
	puts("Primeiro imprime: ");	
	imprime1(vet, 5);

	puts("\nSegundo imprime: ");
	imprime2(vet);
	
	puts("\nTerceiro imprime: ");		
	imprime3(vet,5);
}