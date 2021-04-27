//Nome completo: Rafael Concei��o Kanashiro 
//Matr�cula: UC21106234
//Curso: Engenharia de Software 

// Nova funcionalidade dentro do contexto da atividade: Mensagens de erro quando o usu�rio coloca um input errado

//Bibliotecas
#include<stdio.h> //Biblioteca para comandos de entrada e sa�da: printf e scanf
#include<locale.h> //Biblioteca para habilitar a lingua portuguesa e poder usar acentos
#include<stdlib.h> //Biblioteca de prop�sito geral padr�o // system("cls"); system("pause");
#include<string.h> //Biblioteca para manipula��o de cadeias de caracteres e regi�es de mem�ria // strlen()
#include<ctype.h> //Biblioteca para manipula��o de caracteres // toupper

// In�cio do algoritmo: fun��o main
int main(){ 
	setlocale(LC_ALL, "Portuguese"); //Habilita a lingua portuguesa para poder usar acentos
	
	// Declara��o de dados
	int quantidadeSessoes = 0, quantidadePessoas = 0, contar = 0, pessoasMasculino = 0, pessoasFeminino = 0, criancas = 0, adolescentes = 0, adultos = 0, idosos = 0, adultosMasculino = 0, adultosFeminino = 0; //Vari�veis int %d
	char nomeFilme[100]; //Vari�vel char %s
	
	// GUI (Graphic User Interface) (Interface gr�fica do utilizador)
	
	printf("----------------------------------------\n");
	printf("| Seja bem-vindo ao cinema de Bras�lia |\n");
	printf("----------------------------------------\n");
	
	// Solicita a quantidade de sess�es e faz a valida��o, aceitando exatamente 2 (duas) sess�es.
	
	printf("\n> Precisamos das seguintes informa��es:\n"); //Informa ao usu�rio que o programa vai pedir informa��es espec�ficas
	printf("\n> Quantas sess�es? \n> "); //Solicita a quantidade de sess�es ao usu�rio
	scanf("%d", &quantidadeSessoes); //Escaneia a quantidade de sess�es inserida pelo usu�rio (vari�vel int %d)
	fflush(stdin); //Limpa o lixo da mem�ria
	
	// While (estrutura de repeti��o) para manter o programa em loop enquanto o usu�rio colocar um n�mero de sess�es inv�lido
	
	while (quantidadeSessoes != 2) {
	printf("\n> Quantidade de sess�es inv�lida, tente novamente."); //Informa ao usu�rio que o valor de sess�es inserido � invalido
	printf("\n> Quantas sess�es? (S�o aceitas somente 2 (duas) sess�es.) \n> "); //Solicita a quantidade de sess�es ao usu�rio novamente e informa a �nica quantidade aceita
	scanf("%d", &quantidadeSessoes); //Escaneia a quantidade de sess�es inserida pelo usu�rio novamente (vari�vel int %d)
	fflush(stdin); //Limpa o lixo da mem�ria
	}
	
	printf("\n//------------------------------------------------------\\\\\n"); //(Graphic User Interface) (Interface gr�fica do utilizador)
	
	// Solicita o nome do filme e faz a valida��o, n�o aceitando o campo de preenchimento vazio.
	
	printf("\n> Qual o nome do filme? \n> "); //Solicita o nome do filme ao usu�rio
	fgets(nomeFilme, 100, stdin); //Escaneia o nome do filme inserido pelo usu�rio (vari�vel char %s)
	fflush(stdin); //Limpa o lixo da mem�ria
	
	// While (estrutura de repeti��o) para manter o programa em loop enquanto o usu�rio deixar o campo de preenchimento do nome do filme vazio
	
	while (strlen(nomeFilme) == 0 || nomeFilme[0] == '\r' || nomeFilme[0] == '\n') {
	printf("\n> Nome do filme inv�lido, tente novamente."); //Informa ao usu�rio que o nome do filme � inv�lido pelo campo de preenchimento estar vazio
	printf("\n> Qual o nome do filme? \n> "); //Solicita o nome do filme ao usu�rio novamente
	fgets(nomeFilme, 100, stdin); //Escaneia o nome do filme inserido pelo usu�rio novamente (vari�vel char %s)
	fflush(stdin); //Limpa o lixo da mem�ria
	}
	
	printf("\n//------------------------------------------------------\\\\\n"); //(Graphic User Interface) (Interface gr�fica do utilizador)
	
	// Solicita a quantidade de pessoas que assistiram ao filme, n�o aceitando valor inferior a 10 (dez)
	
	printf("\n> Quantas pessoas? \n> "); //Solicita a quantidade de pessoas presentes na sess�o ao usu�rio
	scanf("%d", &quantidadePessoas); //Escaneia a quantidade de pessoas presentes na sess�o inserida pelo usu�rio (vari�vel int %d)
	fflush(stdin); //Limpa o lixo da mem�ria
	
	// While (estrutura de repeti��o) para manter o programa em loop enquanto o usu�rio inserir um n�mero de pessoas menor que 10 (dez)
	
	while(quantidadePessoas < 10) {
	printf("\n> Quantidade de pessoas inv�lida, tente novamente."); //Informa ao usu�rio que a quantidade de pessoas inserida � inv�lida por ser menor que 10 (dez)
	printf("\n> Quantas pessoas? (Quantidade m�nima: 10) \n> "); //Solicita a quantidade de pessoas presentes na sess�o ao usu�rio novamente
	scanf("%d", &quantidadePessoas); //Escaneia a quantidade de pessoas presentes na sess�o inserida pelo usu�rio novamente (vari�vel int %d)
	fflush(stdin); //Limpa o lixo da mem�ria
	}
	
	// Para cada pessoa que assistiu ao filme � solicitado e validado o sexo (M - masculino, F - Feminino) e a idade (de 3 a 100 anos).
	
	// Struct feita para armazenar as vari�veis das pessoas inseridas pelo usu�rio 
	//(declara��o de tipo de dados composta que define uma lista fisicamente agrupada de vari�veis sob um nome em um bloco de mem�ria)
	
	struct infoPessoas {
	char nome[50];
	char sexo;
	int idade;
	};
	
	// Cria a vari�vel que representa cada pessoa
	struct infoPessoas pessoas[quantidadePessoas];
	
	// For (estrutura de repeti��o) ir� ser executada de acordo com o n�mero de pessoas informado pelo usu�rio
	
	for(contar = 0; contar < quantidadePessoas; contar++) {
		
	system("cls"); //Limpa a tela do usu�rio
	
	printf("//------------------------------------------------------\\\\\n\n"); // GUI (Graphic User Interface) (Interface gr�fica do utilizador)
	
	// NOME
	
	printf("> Qual o nome da %d� pessoa? \n> ", contar + 1); //Solicita os nomes das pessoas inseridas pelo usu�rio
	fgets(pessoas[contar].nome, 50, stdin); //Escaneia os nomes das pessoas inseridas pelo usu�rio
	fflush(stdin); //Limpa o lixo da mem�ria
	
	// While (estrutura de repeti��o) para manter o programa em loop enquanto o usu�rio deixar o campo de preenchimento do nome das pessoas vazio
	
	while (strlen(pessoas[contar].nome) == 0 || pessoas[contar].nome[0] == '\r' || pessoas[contar].nome[0] == '\n') {
	printf("\n> Nome da %d� pessoa inv�lido, tente novamente.", contar + 1); //Informa ao usu�rio que o nome inserido � inv�lido pelo campo de preenchimento estar vazio
	printf("\n> Qual o nome da %d� pessoa? \n> ", contar + 1); //Solicita os nomes das pessoas inseridas pelo usu�rio novamente
	fgets(pessoas[contar].nome, 50, stdin); //Escaneia os nomes das pessoas inseridas pelo usu�rio novamente
	fflush(stdin); //Limpa o lixo da mem�ria
	}
	
	// SEXO
	
	printf("\n> Qual o sexo da %d� pessoa? (M para masculino - F para feminino) \n> ", contar + 1); //Solicita os sexos das pessoas inseridas pelo usu�rio
	scanf("%c", &pessoas[contar].sexo); //Escaneia os sexos das pessoas inseridas pelo usu�rio
	pessoas[contar].sexo = toupper(pessoas[contar].sexo); //Transforma a letra do sexo inserida pelo usu�rio em um caractere mai�sculo pela fun��o toupper
	fflush(stdin); //Limpa o lixo da mem�ria
	
	// While (estrutura de repeti��o) para manter o programa em loop enquanto o usu�rio colocar algum input sem ser M ou F
	
	while(pessoas[contar].sexo != 'M' && pessoas[contar].sexo != 'F') {
	printf("\n> Sexo da %d� pessoa inv�lido, tente novamente.", contar + 1); //Informa ao usu�rio que o sexo inserido � inv�lido
	printf("\n> Qual o sexo da %d� pessoa? (M para masculino - F para feminino) \n> ", contar + 1); //Solicita os sexos das pessoas inseridas pelo usu�rio novamente
	scanf("%c", &pessoas[contar].sexo); //Escaneia os sexos das pessoas inseridas pelo usu�rio novamente
	fflush(stdin); //Limpa o lixo da mem�ria
	}
	
	// Condi��o para validar o sexo de uma pessoa de acordo com o caractere inserido (M para masculino e F para feminino)
	
	if(pessoas[contar].sexo == 'M')
	pessoasMasculino++;
	else if (pessoas[contar].sexo == 'F')
	pessoasFeminino++;
	
	// IDADE 
	
	printf("\n> Qual a idade da %d� pessoa? \n> ", contar + 1); //Solicita as idades das pessoas inseridas pelo usu�rio
	scanf("%d", &pessoas[contar].idade);  //Escaneia as idades das pessoas inseridas pelo usu�rio
	fflush(stdin); //Limpa o lixo da mem�ria
	
	// While (estrutura de repeti��o) para manter o programa em loop enquanto o usu�rio colocar uma idade inv�lida (menor que 3 ou maior que 100) 
	
	while (pessoas[contar].idade < 3 || pessoas[contar].idade > 100) {
	printf("\n> Idade da %d� pessoa inv�lida, tente novamente.", contar + 1); //Informa ao usu�rio que a idade inserida � inv�lida
	printf("\n> Qual a idade da %d� pessoa? (Idade m�nima: 3 - Idade m�xima: 100) \n> ", contar + 1); //Solicita as idades das pessoas inseridas pelo usu�rio novamente
	scanf("%d", &pessoas[contar].idade); //Escaneia as idades das pessoas inseridas pelo usu�rio novamente
	fflush(stdin); //Limpa o lixo da mem�ria
	}
	
	// Condi��o para validar se as pessoas inseridas s�o crian�as, adolescentes, adultos ou idosos de acordo com a idade informada
	
	if(pessoas[contar].idade >= 3 && pessoas[contar].idade <= 13)
	criancas++;
	else if(pessoas[contar].idade >= 14 && pessoas[contar].idade <= 17)
	adolescentes++;
	else if(pessoas[contar].idade >= 18 && pessoas[contar].idade <= 64)
	adultos++;
	else if(pessoas[contar].idade >= 65 && pessoas[contar].idade <= 100)
	idosos++;
	
	// Condi��o para validar se as pessoas inseridas s�o homens adultos ou mulheres adultas
	
	if(pessoas[contar].idade >= 18 && pessoas[contar].sexo == 'M')
	adultosMasculino++;
	else if(pessoas[contar].idade >= 18 && pessoas[contar].sexo == 'F')
	adultosFeminino++;
	
	}
	
	//Ap�s a leitura dos dados do filme, � apresentado, em uma janela limpa:
	//1- O nome do filme, a quantidade de pessoas do sexo feminino e a quantidade de pessoas do sexo masculino que assistiram ao filme
	//2- A quantidade de pessoas, seguindo a classifica��o por idade
	
	system("cls"); //Limpa a tela do usu�rio
	
	printf("//------------------------------------------------------\\\\\n\n"); // GUI (Graphic User Interface) (Interface gr�fica do utilizador)
	
	printf("> O filme assistido foi %s", nomeFilme);
	printf("> %d pessoas assistiram ao filme, sendo %d do sexo masculino e %d do sexo feminino.", quantidadePessoas, pessoasMasculino, pessoasFeminino);
	printf("\n\n> Dentre as pessoas que assistiram o filme, foram:", criancas, adolescentes, adultos, idosos);
	printf("\n> %d crian�as (3 at� 13 anos)", criancas);
	printf("\n> %d adolescentes (14 at� 17 anos)", adolescentes);
	printf("\n> %d adultos (18 at� 64 anos)", adultos);
	printf("\n> %d idosos (65 at� 100 anos)\n\n", idosos);
	
	system("pause"); //Fun��o para fazer uma pausa para que o usu�rio possa ler as informa��es e quando quiser apertar qualquer tecla para prosseguir
	
	//Depois da leitura dos dados de cada sess�o, � mostrada, em uma tela limpa a quantidade de pessoas 
    //maiores de idade (idade maior ou igual a 18 anos) do sexo masculino e a quantidade de pessoas maiores de 
    //idade do sexo feminino que estiveram presentes.
    
    system("cls"); //Limpa a tela do usu�rio
    
	printf("//------------------------------------------------------\\\\\n\n"); // GUI (Graphic User Interface) (Interface gr�fica do utilizador)
	
	printf("> Estiveram presentes %d homens adultos e %d mulheres adultas.\n\n", adultosMasculino, adultosFeminino);
	
	
	
	system("pause"); //Fun��o para que o execut�vel n�o se feche sozinho
	return 0; //Retorno da fun��o
 } 
 // Fim do algoritmo
