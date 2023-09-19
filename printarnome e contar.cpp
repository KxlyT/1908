#include <stdio.h>
#include <string.h>

int main(void) {
	
	char nome[120];
	int i, tamanho, letraA, letraB, letraC;
	
	printf("Digite seu nome completo: ");
	scanf("%[ -~]", nome);
	
	tamanho = strlen(nome);
	printf("%d", tamanho);
	
	for(i = 0; i < tamanho; i++) {
		if (nome[i] == 'a')
			letraA++;
		else if(nome[i] == 'b')
			letraB++;
		else if (nome[i] == 'c')
			letraC++;
	}
	
	printf("A quantidade de As é %d, de Bs é %d e de Cs é %d", 
				letraA, letraB, letraC);
}
