#include <stdio.h>

int main(void) {
	
	char nome[100], letra;
	int i;
	
	printf("Digite seu nome completo: ");
	
	i = 0;
	letra = getchar();
	while (letra != '\n') {
		nome [i] = letra;
		i++;
		letra = getchar();
	}
	
	tamanho = i;
	printf("O nome completo e: ");
	for (i = 0; i < tamanho; i++){
		printf("%c", nome[i]);
	}
	
}
