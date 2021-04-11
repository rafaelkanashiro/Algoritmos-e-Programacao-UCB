#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("--------------------------------\n");
	printf("| Calcular módulo de um número |\n");
	printf("--------------------------------\n");
	printf("> Insira o número que você deseja descobrir o módulo: ");
	scanf("%d", &numero);
	
	if (numero < 0) {
	numero = - (numero);
	printf("> O módulo do número inserido é %d\n", numero);
	}
	else printf("> O módulo do número inserido é %d\n", numero);
	
	system("pause");
	return 0;
 }
