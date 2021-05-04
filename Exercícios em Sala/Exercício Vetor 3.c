//3. Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int quantDados = 0, somaDados = 0, i;
	
	do {
	printf("> Qual a quantidade de dados? (Mínimo 1 - Máximo 100)\n");
	printf("> ");
	scanf("%d", &quantDados);
	printf("\n");
	}while (quantDados < 1 || quantDados > 100);
	
	int valorDados[quantDados];
	
	for(i=0; i<quantDados; i++) {
	printf("> Qual o valor do %dº dado? \n", i+1);
	printf("> ");
	scanf("%d", &valorDados[i]);
	printf("\n");
	somaDados += valorDados[i];
	}
	
	printf("\n> O valor dos %d dados somados é %d.\n\n", i, somaDados);
	
	system("pause");
	return 0;
 }
