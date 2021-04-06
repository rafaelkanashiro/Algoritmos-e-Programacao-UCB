#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int sexo, matriculaFuncionario, horasTrabalhadas;
	float salarioPorHora, salarioTotal;
	char nome[50];
	printf("---------------------------\n");
	printf("| Dados de um funcionário |\n");
	printf("---------------------------\n");
	printf("> Insira o nome do funcionário: \n");
	fgets(nome, 50, stdin);
	fflush(stdin);
	printf("> Insira o sexo do funcionário: \n");
	printf("> Digite 1 para o sexo masculino. \n");
	printf("> Digite 2 para o sexo feminino. \n");
	scanf("%d", &sexo);
	fflush(stdin);
	printf("> Insira a matrícula do funcionário: \n");
	scanf("%d", &matriculaFuncionario);
	printf("> Insira a quantidade de horas trabalhadas: \n");
	scanf("%d", &horasTrabalhadas);
	printf("> Insira o salário por hora: \n");
	scanf("%f", &salarioPorHora);
	fflush(stdin);
	printf("\n");
	printf("> Dados do Funcionário:\n\n");
	printf("> Nome Completo: %s\n", nome);
	if (sexo == 1) {
	printf("> Sexo: Masculino\n");
		}
	else if (sexo == 2) {
	printf("> Sexo: Feminino\n");
		}
	if (horasTrabalhadas == 1) {
	printf("> Horas Trabalhadas: %d hora\n", horasTrabalhadas);
		}
	else printf("> Horas Trabalhadas: %d horas\n", horasTrabalhadas);
	printf("> Salário Por Hora: R$%0.2f\n", salarioPorHora);
	salarioTotal = salarioPorHora * horasTrabalhadas;
	printf("> Salário Total: R$%0.2f\n\n", salarioTotal);
	
	system("pause");
	return 0;
 }
