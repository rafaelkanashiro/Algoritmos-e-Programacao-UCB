#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, valor3;
	
	printf("-----------------------------------------------------------\n");
	printf("| Ler 3 valores numéricos e encontrar o maior dentre eles |\n");
	printf("-----------------------------------------------------------\n");
	printf("> Insira o primeiro valor: ");
	scanf("%d", &valor1);
	printf("> Insira o segundo valor: ");
	scanf("%d", &valor2);
	printf("> Insira o terceiro valor: ");
	scanf("%d", &valor3);
	
	if (valor1>valor2 && valor1>valor3)
	printf("\n> Dentre os 3 números informados %d é o maior valor.\n", valor1);
	else if (valor2>valor1 && valor2>valor3)
	printf("\n> Dentre os 3 números informados %d é o maior valor.\n", valor2);
	else if (valor3>valor1 && valor3>valor2)
	printf("\n> Dentre os 3 números informados %d é o maior valor.\n", valor3);
	else
	printf("\n> Valores inválidos.\n");
	
	system("pause");
	return 0;
 }
