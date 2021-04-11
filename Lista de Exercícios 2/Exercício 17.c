#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int diasVividos, anoAtual, anoNascimento;
	char nome[50];
	
	printf("-------------------------------\n");
	printf("| Calculadora de dias vividos |\n");
	printf("-------------------------------\n");
	printf("> Qual o seu nome? ");
	fgets(nome, 50, stdin);
	printf("> Qual o ano que você nasceu? ");
	scanf("%d", &anoNascimento);
	printf("> Qual o ano atual? ");
	scanf("%d", &anoAtual);
	
	diasVividos = (anoAtual - anoNascimento) * 365;
	
	if (diasVividos <= 0)
	printf("\n> Ano de nascimento inválido.\n");
	else
	printf("\n> %s> você já viveu aproximadamente %d dias.\n", nome, diasVividos);
	
	system("pause");
	return 0;
 }
