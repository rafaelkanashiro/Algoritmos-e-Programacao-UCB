#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("------------------------------------------\n");
	printf("| Determinar se um n�mero � par ou �mpar |\n");
	printf("------------------------------------------\n");
	printf("> Insira um n�mero: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0)
	printf("> O n�mero inserido � par.\n");
	else
	printf("> O n�mero inserido � �mpar.\n");
	
	system("pause");
	return 0;
 }
