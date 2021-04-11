//Objetivo: Determinar o menor de três valores fornecidos pelo usuário
//Entrada: 3 valores
//Saida: O menor dos 3 valores

#include<stdio.h> //Biblioteca para comandos de entrada e saída: printf e scanf
#include<locale.h> //Biblioteca para poder usar acentos
#include<stdlib.h> //Biblioteca de propósito geral padrão

int main(){ //Início do algoritmo: função main
	setlocale(LC_ALL, "Portuguese"); //Habilitando a linguagem portuguesa para poder usar acentos
	//Declaração de dados
	int valor1, valor2, valor3; //Variável int %d
	//GUI (Graphic User Interface)
	printf("-----------------------------------------------------------\n");
	printf("| Ler 3 valores numéricos e encontrar o menor dentre eles |\n");
	printf("-----------------------------------------------------------\n");
	//Entrada de dados
	printf("> Insira o primeiro valor: "); //Solicitar o valor ao usuário
	scanf("%d", &valor1); //Scan da variável valor1
	printf("> Insira o segundo valor: ");
	scanf("%d", &valor2);
	printf("> Insira o terceiro valor: ");
	scanf("%d", &valor3);
	//Processamento e saída de dados
	if (valor1<valor2 && valor1<valor3) //Processamento dos valores inseridos pelo usuário
	printf("\n> Dentre os 3 números informados %d é o menor valor.\n", valor1); //Exibir resultado na tela
	else if (valor2<valor1 && valor2<valor3)
	printf("\n> Dentre os 3 números informados %d é o menor valor.\n", valor2);
	else if (valor3<valor1 && valor3<valor2)
	printf("\n> Dentre os 3 números informados %d é o menor valor.\n", valor3);
	else
	printf("\n> Valores inválidos.\n"); //Exibir esta mensagem quando o usuário inserir valores inválidos
	
	system("pause"); //Função para que o executável não feche sozinho
	return 0; //Retorno da função
 } //Final do algoritmo
