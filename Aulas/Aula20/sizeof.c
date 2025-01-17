#include <stdio.h>

void main(){
	float teste;
	
	printf(" --- TIPO ---|--- BYTES --- \n");
	printf("Char.........: %d bytes\n",sizeof(char));
	printf("short........: %d bytes\n",sizeof(short));
	printf("int..........: %d bytes\n",sizeof(int));
	printf("long.........: %d bytes\n",sizeof(long));
	printf("float........: %d bytes\n",sizeof(float));
	printf("double.......: %d bytes\n",sizeof(double));
	printf("long double..: %d bytes\n",sizeof(long double));
	printf("\nO tamanho de teste e...: %d bytes\n\n",sizeof(teste));
	
	/*O operador sizeof permite retornar a quantidade de memória alocada (em bytes) por um tipo de dado, ou por uma determinada variável.​

	  O valor retornado pode variar de acordo com a arquitetura da máquina que está sendo utilizada.​*/
}