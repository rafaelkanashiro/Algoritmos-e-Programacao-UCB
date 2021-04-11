//Objetivo: Identificar o Estado do DDD fornecido pelo usu�rio com base em uma tabela
//Entrada: DDD
//Sa�da: Estado do DDD inserido pelo usu�rio

#include<stdio.h> //Biblioteca para comandos de entrada e sa�da: printf e scanf
#include<locale.h> //Biblioteca para poder usar acentos
#include<stdlib.h> //Biblioteca de prop�sito geral padr�o

int main(){ //In�cio do algoritmo: fun��o main
	setlocale(LC_ALL, "Portuguese"); //Habilitando a linguagem portuguesa para poder usar acentos
	//Declara��o de dados
    int ddd; //Vari�vel int %d
	//GUI (Graphic User Interface)
	printf("------------------------\n");
	printf("| Identificador de DDD |\n");
	printf("------------------------\n");
	//Entrada de dados
	printf("> Insira o DDD: "); //Solicitar o DDD ao usu�rio
	scanf("%d", &ddd); //Scan da vari�vel ddd
	//Processamento e sa�da de dados
	if (ddd==61) { //Condi��o para determinar o estado do DDD inserido pelo usu�rio
	printf("> O DDD inserido � de Bras�lia.\n"); //Exibir na tela o estado do DDD inserido pelo usu�rio
	}
    else if (ddd==71)
    printf("> O DDD inserido � de Salvador.\n");
    else if (ddd==11)
    printf("> O DDD inserido � de S�o Paulo.\n");
    else if (ddd==21)
    printf("> O DDD inserido � de Rio de Janeiro.\n");
    else if (ddd==32)
    printf("> O DDD inserido � de Juiz de fora.\n");
    else if (ddd==19)
    printf("> O DDD inserido � de Campinas.\n");
    else if (ddd==27)
    printf("> O DDD inserido � de Vitoria.\n");
    else if (ddd==31)
    printf("> O DDD inserido � de Belo Horizonte.\n");
    else 
	printf("DDD inv�lido.\n"); //Exibir esta mensagem caso o usu�rio insira um DDD n�o correspondente com os da tabela
    
		system("pause"); //Fun��o para que o execut�vel n�o feche sozinho
		return 0; //Retorno da fun��o
 } //Final do algoritmo
