//Objetivo: Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo
//Entrada: 3 valores
//Saida: Determinar se os valores inseridos podem constituir os lados de um tri�ngulo e se o resultado for sim, apresentar o tipo do tri�ngulo.

#include<stdio.h> //Biblioteca para comandos de entrada e sa�da: printf e scanf
#include<locale.h> //Biblioteca para poder usar acentos
#include<stdlib.h> //Biblioteca de prop�sito geral padr�o

int main(){ //In�cio do algoritmo: fun��o main
	setlocale(LC_ALL, "Portuguese"); //Habilitando a linguagem portuguesa para poder usar acentos
	//Declara��o de dados
	float v1, v2, v3; //Vari�vel float %f
	//GUI (Graphic User Interface)
	printf("-------------------------------------------------------------------------------------------\n");
	printf("| Verificar se tr�s valores podem constituir os lados de um tri�ngulo e apresentar o tipo |\n");
	printf("-------------------------------------------------------------------------------------------\n");
	//Entrada de dados
	printf("> Insira o primeiro valor: "); //Solicitar o valor ao usu�rio
	scanf("%f", &v1); //Scan da vari�vel v1
	printf("> Insira o segundo valor: ");
	scanf("%f", &v2);
	printf("> Insira o terceiro valor: ");
	scanf("%f", &v3);
	//Processamento e sa�da de dados
	if (v1+v2>v3 && v2+v3>v1 && v1+v3>v2)  //Condi��o para determinar a exist�ncia do tri�ngulo
	{ //Come�o do bloco de c�digo
	printf("\n> � poss�vel criar um tri�ngulo com esses valores.\n"); //Exibir que � poss�vel criar um tri�ngulo com os valores inseridos
	if (v1 == v2 && v1 == v3) //Condi��o para determinar o tipo do tri�ngulo
	printf("> Esse tri�ngulo � equil�tero.\n"); //Exibir o tipo do tri�ngulo
	else if (v1 == v2 || v2 == v3 || v1 == v3)
	printf("> Esse tri�ngulo � is�celes.\n");
	else
	printf("> Esse tri�ngulo � escaleno.\n");
	} //Fim do bloco de c�digo
	else //Condi��o para determinar a n�o exist�ncia do tri�ngulo
	printf("\n> N�o � poss�vel criar um tri�ngulo com esses valores.\n"); //Exibir que n�o � poss�vel criar um tri�ngulo com os valores inseridos
	
	system("pause"); //Fun��o para que o execut�vel n�o feche sozinho
	return 0; //Retorno da fun��o
 } //Final do algoritmo
