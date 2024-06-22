#include <stdio.h>

int main(){
	float n1,n2,media;
	
	printf("Digite a 1 nota:\n");
	scanf("%f",&n1);
	
	printf("Digite a 2 nota:\n");
	scanf("%f",&n2);
	
	media = (n1 + n2) / 2;
	
	if(media >= 7){
		printf("Aprovado!");
	}
}