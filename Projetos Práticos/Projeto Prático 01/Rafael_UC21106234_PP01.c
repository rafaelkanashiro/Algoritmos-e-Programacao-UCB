//Nome completo: Rafael Conceição Kanashiro 
//Matrícula: UC21106234
//Curso: Engenharia de Software 

// Nova funcionalidade dentro do contexto da atividade: Mensagens de erro quando o usuário coloca um input errado

//Bibliotecas
#include<stdio.h> //Biblioteca para comandos de entrada e saída: printf e scanf
#include<locale.h> //Biblioteca para habilitar a lingua portuguesa e poder usar acentos
#include<stdlib.h> //Biblioteca de propósito geral padrão // system("cls"); system("pause");
#include<string.h> //Biblioteca para manipulação de cadeias de caracteres e regiões de memória // strlen()
#include<ctype.h> //Biblioteca para manipulação de caracteres // toupper

// Início do algoritmo: função main
int main(){ 
	setlocale(LC_ALL, "Portuguese"); //Habilita a lingua portuguesa para poder usar acentos
	
	// Declaração de dados
	int quantidadeSessoes = 0, quantidadePessoas = 0, contar = 0, pessoasMasculino = 0, pessoasFeminino = 0, criancas = 0, adolescentes = 0, adultos = 0, idosos = 0, adultosMasculino = 0, adultosFeminino = 0; //Variáveis int %d
	char nomeFilme[100]; //Variável char %s
	
	// GUI (Graphic User Interface) (Interface gráfica do utilizador)
	
	printf("----------------------------------------\n");
	printf("| Seja bem-vindo ao cinema de Brasília |\n");
	printf("----------------------------------------\n");
	
	// Solicita a quantidade de sessões e faz a validação, aceitando exatamente 2 (duas) sessões.
	
	printf("\n> Precisamos das seguintes informações:\n"); //Informa ao usuário que o programa vai pedir informações específicas
	printf("\n> Quantas sessões? \n> "); //Solicita a quantidade de sessões ao usuário
	scanf("%d", &quantidadeSessoes); //Escaneia a quantidade de sessões inserida pelo usuário (variável int %d)
	fflush(stdin); //Limpa o lixo da memória
	
	// While (estrutura de repetição) para manter o programa em loop enquanto o usuário colocar um número de sessões inválido
	
	while (quantidadeSessoes != 2) {
	printf("\n> Quantidade de sessões inválida, tente novamente."); //Informa ao usuário que o valor de sessões inserido é invalido
	printf("\n> Quantas sessões? (São aceitas somente 2 (duas) sessões.) \n> "); //Solicita a quantidade de sessões ao usuário novamente e informa a única quantidade aceita
	scanf("%d", &quantidadeSessoes); //Escaneia a quantidade de sessões inserida pelo usuário novamente (variável int %d)
	fflush(stdin); //Limpa o lixo da memória
	}
	
	printf("\n//------------------------------------------------------\\\\\n"); //(Graphic User Interface) (Interface gráfica do utilizador)
	
	// Solicita o nome do filme e faz a validação, não aceitando o campo de preenchimento vazio.
	
	printf("\n> Qual o nome do filme? \n> "); //Solicita o nome do filme ao usuário
	fgets(nomeFilme, 100, stdin); //Escaneia o nome do filme inserido pelo usuário (variável char %s)
	fflush(stdin); //Limpa o lixo da memória
	
	// While (estrutura de repetição) para manter o programa em loop enquanto o usuário deixar o campo de preenchimento do nome do filme vazio
	
	while (strlen(nomeFilme) == 0 || nomeFilme[0] == '\r' || nomeFilme[0] == '\n') {
	printf("\n> Nome do filme inválido, tente novamente."); //Informa ao usuário que o nome do filme é inválido pelo campo de preenchimento estar vazio
	printf("\n> Qual o nome do filme? \n> "); //Solicita o nome do filme ao usuário novamente
	fgets(nomeFilme, 100, stdin); //Escaneia o nome do filme inserido pelo usuário novamente (variável char %s)
	fflush(stdin); //Limpa o lixo da memória
	}
	
	printf("\n//------------------------------------------------------\\\\\n"); //(Graphic User Interface) (Interface gráfica do utilizador)
	
	// Solicita a quantidade de pessoas que assistiram ao filme, não aceitando valor inferior a 10 (dez)
	
	printf("\n> Quantas pessoas? \n> "); //Solicita a quantidade de pessoas presentes na sessão ao usuário
	scanf("%d", &quantidadePessoas); //Escaneia a quantidade de pessoas presentes na sessão inserida pelo usuário (variável int %d)
	fflush(stdin); //Limpa o lixo da memória
	
	// While (estrutura de repetição) para manter o programa em loop enquanto o usuário inserir um número de pessoas menor que 10 (dez)
	
	while(quantidadePessoas < 10) {
	printf("\n> Quantidade de pessoas inválida, tente novamente."); //Informa ao usuário que a quantidade de pessoas inserida é inválida por ser menor que 10 (dez)
	printf("\n> Quantas pessoas? (Quantidade mínima: 10) \n> "); //Solicita a quantidade de pessoas presentes na sessão ao usuário novamente
	scanf("%d", &quantidadePessoas); //Escaneia a quantidade de pessoas presentes na sessão inserida pelo usuário novamente (variável int %d)
	fflush(stdin); //Limpa o lixo da memória
	}
	
	// Para cada pessoa que assistiu ao filme é solicitado e validado o sexo (M - masculino, F - Feminino) e a idade (de 3 a 100 anos).
	
	// Struct feita para armazenar as variáveis das pessoas inseridas pelo usuário 
	//(declaração de tipo de dados composta que define uma lista fisicamente agrupada de variáveis sob um nome em um bloco de memória)
	
	struct infoPessoas {
	char nome[50];
	char sexo;
	int idade;
	};
	
	// Cria a variável que representa cada pessoa
	struct infoPessoas pessoas[quantidadePessoas];
	
	// For (estrutura de repetição) irá ser executada de acordo com o número de pessoas informado pelo usuário
	
	for(contar = 0; contar < quantidadePessoas; contar++) {
		
	system("cls"); //Limpa a tela do usuário
	
	printf("//------------------------------------------------------\\\\\n\n"); // GUI (Graphic User Interface) (Interface gráfica do utilizador)
	
	// NOME
	
	printf("> Qual o nome da %dª pessoa? \n> ", contar + 1); //Solicita os nomes das pessoas inseridas pelo usuário
	fgets(pessoas[contar].nome, 50, stdin); //Escaneia os nomes das pessoas inseridas pelo usuário
	fflush(stdin); //Limpa o lixo da memória
	
	// While (estrutura de repetição) para manter o programa em loop enquanto o usuário deixar o campo de preenchimento do nome das pessoas vazio
	
	while (strlen(pessoas[contar].nome) == 0 || pessoas[contar].nome[0] == '\r' || pessoas[contar].nome[0] == '\n') {
	printf("\n> Nome da %dª pessoa inválido, tente novamente.", contar + 1); //Informa ao usuário que o nome inserido é inválido pelo campo de preenchimento estar vazio
	printf("\n> Qual o nome da %dª pessoa? \n> ", contar + 1); //Solicita os nomes das pessoas inseridas pelo usuário novamente
	fgets(pessoas[contar].nome, 50, stdin); //Escaneia os nomes das pessoas inseridas pelo usuário novamente
	fflush(stdin); //Limpa o lixo da memória
	}
	
	// SEXO
	
	printf("\n> Qual o sexo da %dª pessoa? (M para masculino - F para feminino) \n> ", contar + 1); //Solicita os sexos das pessoas inseridas pelo usuário
	scanf("%c", &pessoas[contar].sexo); //Escaneia os sexos das pessoas inseridas pelo usuário
	pessoas[contar].sexo = toupper(pessoas[contar].sexo); //Transforma a letra do sexo inserida pelo usuário em um caractere maiúsculo pela função toupper
	fflush(stdin); //Limpa o lixo da memória
	
	// While (estrutura de repetição) para manter o programa em loop enquanto o usuário colocar algum input sem ser M ou F
	
	while(pessoas[contar].sexo != 'M' && pessoas[contar].sexo != 'F') {
	printf("\n> Sexo da %dª pessoa inválido, tente novamente.", contar + 1); //Informa ao usuário que o sexo inserido é inválido
	printf("\n> Qual o sexo da %dª pessoa? (M para masculino - F para feminino) \n> ", contar + 1); //Solicita os sexos das pessoas inseridas pelo usuário novamente
	scanf("%c", &pessoas[contar].sexo); //Escaneia os sexos das pessoas inseridas pelo usuário novamente
	fflush(stdin); //Limpa o lixo da memória
	}
	
	// Condição para validar o sexo de uma pessoa de acordo com o caractere inserido (M para masculino e F para feminino)
	
	if(pessoas[contar].sexo == 'M')
	pessoasMasculino++;
	else if (pessoas[contar].sexo == 'F')
	pessoasFeminino++;
	
	// IDADE 
	
	printf("\n> Qual a idade da %dª pessoa? \n> ", contar + 1); //Solicita as idades das pessoas inseridas pelo usuário
	scanf("%d", &pessoas[contar].idade);  //Escaneia as idades das pessoas inseridas pelo usuário
	fflush(stdin); //Limpa o lixo da memória
	
	// While (estrutura de repetição) para manter o programa em loop enquanto o usuário colocar uma idade inválida (menor que 3 ou maior que 100) 
	
	while (pessoas[contar].idade < 3 || pessoas[contar].idade > 100) {
	printf("\n> Idade da %dª pessoa inválida, tente novamente.", contar + 1); //Informa ao usuário que a idade inserida é inválida
	printf("\n> Qual a idade da %dª pessoa? (Idade mínima: 3 - Idade máxima: 100) \n> ", contar + 1); //Solicita as idades das pessoas inseridas pelo usuário novamente
	scanf("%d", &pessoas[contar].idade); //Escaneia as idades das pessoas inseridas pelo usuário novamente
	fflush(stdin); //Limpa o lixo da memória
	}
	
	// Condição para validar se as pessoas inseridas são crianças, adolescentes, adultos ou idosos de acordo com a idade informada
	
	if(pessoas[contar].idade >= 3 && pessoas[contar].idade <= 13)
	criancas++;
	else if(pessoas[contar].idade >= 14 && pessoas[contar].idade <= 17)
	adolescentes++;
	else if(pessoas[contar].idade >= 18 && pessoas[contar].idade <= 64)
	adultos++;
	else if(pessoas[contar].idade >= 65 && pessoas[contar].idade <= 100)
	idosos++;
	
	// Condição para validar se as pessoas inseridas são homens adultos ou mulheres adultas
	
	if(pessoas[contar].idade >= 18 && pessoas[contar].sexo == 'M')
	adultosMasculino++;
	else if(pessoas[contar].idade >= 18 && pessoas[contar].sexo == 'F')
	adultosFeminino++;
	
	}
	
	//Após a leitura dos dados do filme, é apresentado, em uma janela limpa:
	//1- O nome do filme, a quantidade de pessoas do sexo feminino e a quantidade de pessoas do sexo masculino que assistiram ao filme
	//2- A quantidade de pessoas, seguindo a classificação por idade
	
	system("cls"); //Limpa a tela do usuário
	
	printf("//------------------------------------------------------\\\\\n\n"); // GUI (Graphic User Interface) (Interface gráfica do utilizador)
	
	printf("> O filme assistido foi %s", nomeFilme);
	printf("> %d pessoas assistiram ao filme, sendo %d do sexo masculino e %d do sexo feminino.", quantidadePessoas, pessoasMasculino, pessoasFeminino);
	printf("\n\n> Dentre as pessoas que assistiram o filme, foram:", criancas, adolescentes, adultos, idosos);
	printf("\n> %d crianças (3 até 13 anos)", criancas);
	printf("\n> %d adolescentes (14 até 17 anos)", adolescentes);
	printf("\n> %d adultos (18 até 64 anos)", adultos);
	printf("\n> %d idosos (65 até 100 anos)\n\n", idosos);
	
	system("pause"); //Função para fazer uma pausa para que o usuário possa ler as informações e quando quiser apertar qualquer tecla para prosseguir
	
	//Depois da leitura dos dados de cada sessão, é mostrada, em uma tela limpa a quantidade de pessoas 
    //maiores de idade (idade maior ou igual a 18 anos) do sexo masculino e a quantidade de pessoas maiores de 
    //idade do sexo feminino que estiveram presentes.
    
    system("cls"); //Limpa a tela do usuário
    
	printf("//------------------------------------------------------\\\\\n\n"); // GUI (Graphic User Interface) (Interface gráfica do utilizador)
	
	printf("> Estiveram presentes %d homens adultos e %d mulheres adultas.\n\n", adultosMasculino, adultosFeminino);
	
	
	
	system("pause"); //Função para que o executável não se feche sozinho
	return 0; //Retorno da função
 } 
 // Fim do algoritmo
