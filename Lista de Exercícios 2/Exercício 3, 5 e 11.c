//Objetivo: Dado três valores, verificar se eles podem constituir os lados de um triângulo
//Entrada: 3 valores
//Saida: Determinar se os valores inseridos podem constituir os lados de um triângulo e se o resultado for sim, apresentar o tipo do triângulo.

#include<stdio.h> //Biblioteca para comandos de entrada e saída: printf e scanf
#include<locale.h> //Biblioteca para poder usar acentos
#include<stdlib.h> //Biblioteca de propósito geral padrão

int main(){ //Início do algoritmo: função main
	setlocale(LC_ALL, "Portuguese"); //Habilitando a linguagem portuguesa para poder usar acentos
	//Declaração de dados
	float v1, v2, v3; //Variável float %f
	//GUI (Graphic User Interface)
	printf("-------------------------------------------------------------------------------------------\n");
	printf("| Verificar se três valores podem constituir os lados de um triângulo e apresentar o tipo |\n");
	printf("-------------------------------------------------------------------------------------------\n");
	//Entrada de dados
	printf("> Insira o primeiro valor: "); //Solicitar o valor ao usuário
	scanf("%f", &v1); //Scan da variável v1
	printf("> Insira o segundo valor: ");
	scanf("%f", &v2);
	printf("> Insira o terceiro valor: ");
	scanf("%f", &v3);
	//Processamento e saída de dados
	if (v1+v2>v3 && v2+v3>v1 && v1+v3>v2)  //Condição para determinar a existência do triângulo
	{ //Começo do bloco de código
	printf("\n> É possível criar um triângulo com esses valores.\n"); //Exibir que é possível criar um triângulo com os valores inseridos
	if (v1 == v2 && v1 == v3) //Condição para determinar o tipo do triângulo
	printf("> Esse triângulo é equilátero.\n"); //Exibir o tipo do triângulo
	else if (v1 == v2 || v2 == v3 || v1 == v3)
	printf("> Esse triângulo é isóceles.\n");
	else
	printf("> Esse triângulo é escaleno.\n");
	} //Fim do bloco de código
	else //Condição para determinar a não existência do triângulo
	printf("\n> Não é possível criar um triângulo com esses valores.\n"); //Exibir que não é possível criar um triângulo com os valores inseridos
	
	system("pause"); //Função para que o executável não feche sozinho
	return 0; //Retorno da função
 } //Final do algoritmo
