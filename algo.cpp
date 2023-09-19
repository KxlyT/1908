#include <stdio.h>

int main(void){
	
	int numeros[5], i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite o %do. numero: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	for (i = 0; i < 5; i++) {
		printf("A posicao %da. e %d\n", i + 1, numeros[i]);
	}
	
	for (i = 4; i >= 0; i--) {
		printf("A posicao %da. e %d\n", i + 1, numeros[i]);
	}
	
}
