#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, diferenca;
	
	printf("-------------------------------------------------------------------\n");
	printf("| Ler dois valores e apresentar a diferen�a do maior para o menor |\n");
	printf("-------------------------------------------------------------------\n");
	printf("> Insira o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("> Insira o primeiro n�mero: ");
	scanf("%f", &num2);
	
	if (num1 > num2) {
	diferenca = num1 - num2;
	printf("> A diferen�a dos n�meros %.1f e %.1f � de: %.1f\n", num1, num2, diferenca);
	}
	else if (num2 > num1) {
	diferenca = num2 - num1;
	printf("> A diferen�a dos n�meros %.1f e %.1f � de: %.1f\n", num2, num1, diferenca);
	}
	else
	printf("> Valores inv�lidos.\n");
	
	system("pause");
	return 0;
 }
