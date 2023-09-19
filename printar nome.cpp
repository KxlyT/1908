#include <stdio.h>

int main(void) {
	
	char nome[120];
	
	printf("Digite seu nome completo: ");
	scanf("%[ -~]", nome);
	
	printf("O nome digitado foi: %s\n", nome);
	
}
