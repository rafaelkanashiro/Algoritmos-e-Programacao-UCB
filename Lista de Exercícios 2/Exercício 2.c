#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("--------------------------------\n");
	printf("| Calcular m�dulo de um n�mero |\n");
	printf("--------------------------------\n");
	printf("> Insira o n�mero que voc� deseja descobrir o m�dulo: ");
	scanf("%d", &numero);
	
	if (numero < 0) {
	numero = - (numero);
	printf("> O m�dulo do n�mero inserido � %d\n", numero);
	}
	else printf("> O m�dulo do n�mero inserido � %d\n", numero);
	
	system("pause");
	return 0;
 }
