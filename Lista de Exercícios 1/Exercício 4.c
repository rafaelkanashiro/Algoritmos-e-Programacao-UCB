#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int divisor, dividendo, quociente, resto;
	printf("-------------------------------------------------\n");
	printf("| Calcular o quociente e o resto de uma divisão |\n");
	printf("-------------------------------------------------\n");
	printf("> Insira o valor do dividendo: ");
	scanf("%d", &dividendo);
	printf("> Insira o valor do divisor: ");
	scanf("%d", &divisor);
	resto = dividendo % divisor;
	quociente = dividendo / divisor;
	printf("> O resto de %d dividido por %d é %d\n", dividendo, divisor, resto);
	printf("> O resultado de %d dividido por %d é %d\n\n", dividendo, divisor, quociente);
	
	system("pause");
	return 0;
 }
