//Objetivo: Determinar o menor de tr�s valores fornecidos pelo usu�rio
//Entrada: 3 valores
//Saida: O menor dos 3 valores

#include<stdio.h> //Biblioteca para comandos de entrada e sa�da: printf e scanf
#include<locale.h> //Biblioteca para poder usar acentos
#include<stdlib.h> //Biblioteca de prop�sito geral padr�o

int main(){ //In�cio do algoritmo: fun��o main
	setlocale(LC_ALL, "Portuguese"); //Habilitando a linguagem portuguesa para poder usar acentos
	//Declara��o de dados
	int valor1, valor2, valor3; //Vari�vel int %d
	//GUI (Graphic User Interface)
	printf("-----------------------------------------------------------\n");
	printf("| Ler 3 valores num�ricos e encontrar o menor dentre eles |\n");
	printf("-----------------------------------------------------------\n");
	//Entrada de dados
	printf("> Insira o primeiro valor: "); //Solicitar o valor ao usu�rio
	scanf("%d", &valor1); //Scan da vari�vel valor1
	printf("> Insira o segundo valor: ");
	scanf("%d", &valor2);
	printf("> Insira o terceiro valor: ");
	scanf("%d", &valor3);
	//Processamento e sa�da de dados
	if (valor1<valor2 && valor1<valor3) //Processamento dos valores inseridos pelo usu�rio
	printf("\n> Dentre os 3 n�meros informados %d � o menor valor.\n", valor1); //Exibir resultado na tela
	else if (valor2<valor1 && valor2<valor3)
	printf("\n> Dentre os 3 n�meros informados %d � o menor valor.\n", valor2);
	else if (valor3<valor1 && valor3<valor2)
	printf("\n> Dentre os 3 n�meros informados %d � o menor valor.\n", valor3);
	else
	printf("\n> Valores inv�lidos.\n"); //Exibir esta mensagem quando o usu�rio inserir valores inv�lidos
	
	system("pause"); //Fun��o para que o execut�vel n�o feche sozinho
	return 0; //Retorno da fun��o
 } //Final do algoritmo
