#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	double A, B, MEDIA;
	printf("-------------------------------------------------\n");
	printf("| Calcular a média de uma nota de um aluno      |\n");
	printf("-------------------------------------------------\n");
	printf("> Insira o valor da nota A: ");
	scanf("%lf", &A);
	printf("> Digite o valor da nota B: ");
	scanf("%lf", &B);
	MEDIA = (A * 3.5 + B * 7.5)/11;
	if (MEDIA < 0) {
	printf("> Valor inválido! Insira um valor igual ou maior que 0.\n\n");
		}
	else if (MEDIA > 10) {
	printf("> Valor inválido! Insira um valor igual ou menor que 10.\n\n");
		}
	else { printf("> O valor da média das notas A e B do aluno é %0.1lf.\n\n", MEDIA);
		}
	
	system("pause");
	return 0;
 }
