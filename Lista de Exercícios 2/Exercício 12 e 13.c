//Objetivo: Identificar o Estado do DDD fornecido pelo usuário com base em uma tabela
//Entrada: DDD
//Saída: Estado do DDD inserido pelo usuário

#include<stdio.h> //Biblioteca para comandos de entrada e saída: printf e scanf
#include<locale.h> //Biblioteca para poder usar acentos
#include<stdlib.h> //Biblioteca de propósito geral padrão

int main(){ //Início do algoritmo: função main
	setlocale(LC_ALL, "Portuguese"); //Habilitando a linguagem portuguesa para poder usar acentos
	//Declaração de dados
    int ddd; //Variável int %d
	//GUI (Graphic User Interface)
	printf("------------------------\n");
	printf("| Identificador de DDD |\n");
	printf("------------------------\n");
	//Entrada de dados
	printf("> Insira o DDD: "); //Solicitar o DDD ao usuário
	scanf("%d", &ddd); //Scan da variável ddd
	//Processamento e saída de dados
	if (ddd==61) { //Condição para determinar o estado do DDD inserido pelo usuário
	printf("> O DDD inserido é de Brasília.\n"); //Exibir na tela o estado do DDD inserido pelo usuário
	}
    else if (ddd==71)
    printf("> O DDD inserido é de Salvador.\n");
    else if (ddd==11)
    printf("> O DDD inserido é de São Paulo.\n");
    else if (ddd==21)
    printf("> O DDD inserido é de Rio de Janeiro.\n");
    else if (ddd==32)
    printf("> O DDD inserido é de Juiz de fora.\n");
    else if (ddd==19)
    printf("> O DDD inserido é de Campinas.\n");
    else if (ddd==27)
    printf("> O DDD inserido é de Vitoria.\n");
    else if (ddd==31)
    printf("> O DDD inserido é de Belo Horizonte.\n");
    else 
	printf("DDD inválido.\n"); //Exibir esta mensagem caso o usuário insira um DDD não correspondente com os da tabela
    
		system("pause"); //Função para que o executável não feche sozinho
		return 0; //Retorno da função
 } //Final do algoritmo
