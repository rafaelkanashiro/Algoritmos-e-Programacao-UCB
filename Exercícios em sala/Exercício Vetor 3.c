//3. Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel composta unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int quantDados = 0, somaDados = 0, i;
	
	do {
	printf("> Qual a quantidade de dados? (M�nimo 1 - M�ximo 100)\n");
	printf("> ");
	scanf("%d", &quantDados);
	printf("\n");
	}while (quantDados < 1 || quantDados > 100);
	
	int valorDados[quantDados];
	
	for(i=0; i<quantDados; i++) {
	printf("> Qual o valor do %d� dado? \n", i+1);
	printf("> ");
	scanf("%d", &valorDados[i]);
	printf("\n");
	somaDados += valorDados[i];
	}
	
	printf("\n> O valor dos %d dados somados � %d.\n\n", i, somaDados);
	
	system("pause");
	return 0;
 }
