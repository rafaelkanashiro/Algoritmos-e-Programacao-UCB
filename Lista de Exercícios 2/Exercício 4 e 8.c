#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, nome[50];
	float altura, peso;
	
	printf("-----------------------------\n");
	printf("| Calculadora de peso ideal |\n");
	printf("-----------------------------\n");
	printf("> Insira o seu nome: ");
	fgets(nome, 50, stdin);
	printf("> Insira o seu sexo (M ou F): ");
	scanf("%c", &sexo);
	fflush(stdin);
	printf("> Insira a sua altura (Exemplo: 1,80): ");
	scanf("%f", &altura);
	
	if (sexo == 'M' || sexo == 'm') {
	peso = (72.5 * altura) - 58;
	printf("\n> Ilmo. Sr. %s> De acordo com a sua altura (%.2fm) o seu peso ideal é %.3fkgs.\n", nome, altura, peso);
	}
	else if (sexo == 'F' || sexo == 'f') {
	peso = (62.1 * altura) - 44.7;
	printf("\n> Ilma. Sra. %s> De acordo com a sua altura (%.2fm) o seu peso ideal é %.3fkgs.\n", nome, altura, peso);
	}
	
	system("pause");
	return 0;
 }
