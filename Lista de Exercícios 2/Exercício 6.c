#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("------------------------------------------\n");
	printf("| Determinar se um número é par ou ímpar |\n");
	printf("------------------------------------------\n");
	printf("> Insira um número: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0)
	printf("> O número inserido é par.\n");
	else
	printf("> O número inserido é ímpar.\n");
	
	system("pause");
	return 0;
 }
