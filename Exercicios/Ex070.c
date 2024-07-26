/*Desenvolva um algoritmo que preencha cada elemento de uma matriz 3x3 com o
quadrado do valor do índice da linha mais o valor do índice da coluna daquela posição.
Ao final, o algoritmo deve mostrar a matriz, na tela.
*/

void main(){
	int matriz[3][3];
	int i, j;
	int pri, seg, ter = 0;
	
	for(i=0; i < 3; i++){
		ter = seg + 1;
		for(j=0; j < 3; j++){
			matriz[i][j] = i * i + j;
		}
	}	
	
	for(i=0;i < 3; i++){
		for(j=0; j < 3; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}