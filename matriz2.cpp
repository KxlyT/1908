#include <stdio.h>

int main(void) {
	
	int matriz[3][3];
	int linha, coluna;
	
	for (linha = 0; linha < 2; linha++) {
		printf("Digite tres numeros, para a %da linha: ", linha);
		for (coluna = 0; coluna < 2; coluna++){
			scanf("%d", matriz[linha][coluna]);
		}
	}
	
	
}
