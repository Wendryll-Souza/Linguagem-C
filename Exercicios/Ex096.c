/*Leia um caractere e diga se é vogal ou consoante*/

#include <stdio.h>

void main(){
	char letra;
	
	printf("Digite uma letra para verificar se e volgal ou consoante: ");
	scanf("%c",&letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
	letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
		printf("A letra (%c) e uma vogal.",letra);
	}else{
		printf("A letra (%c) e uma consoante.",letra);
	}
}