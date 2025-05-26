/*Faça um programa para ler do teclado uma quantidade de seundos e imprimir na tela a conversão para hora, minutos e segundos
Exemplo: entrada 3672
saída: 1:1:12*/

#define VALOR_HORAS 3600
#define VALOR_MINUTOS 60

int main(){

	int segundos,minutos,horas = 0;
	
	printf("Conversor de horas\n");
	printf("Digite a quantidade de segundos: ");
	scanf("%d",&segundos);
	
	while (segundos > 60){
		if(segundos >= VALOR_HORAS){
			horas = segundos / VALOR_HORAS;
			segundos = segundos % VALOR_HORAS;
		}else if(segundos >= VALOR_MINUTOS){
			minutos = segundos / VALOR_MINUTOS;
			segundos = segundos % VALOR_MINUTOS;
		}	
	}

	printf("convertido: %d:%d:%d",horas,minutos,segundos);
}



//1 horas -> 3600s
//1 M     -> 60s
