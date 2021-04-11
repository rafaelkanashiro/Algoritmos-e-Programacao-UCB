#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50], nome2[50], nome3[50];
	float altura1, altura2, altura3;
	
	printf("-----------------------------------------------------------------------\n");
	printf("| Ler nome e altura de três pessoas e determinar quem é a menor delas |\n");
	printf("-----------------------------------------------------------------------\n");
	printf("> Insira o nome da primeira pessoa: ");
	fgets(nome1, 50, stdin);
	printf("> Insira a altura da primeira pessoa (Exemplo: 1,80): ");
	scanf("%f", &altura1);
	fflush(stdin);
	printf("\n> Insira o nome da segunda pessoa: ");
	fgets(nome2, 50, stdin);
	printf("> Insira a altura da segunda pessoa (Exemplo: 1,80): ");
	scanf("%f", &altura2);
	fflush(stdin);
	printf("\n> Insira o nome da terceira pessoa: ");
	fgets(nome3, 50, stdin);
	printf("> Insira a altura da terceira pessoa (Exemplo: 1,80): ");
	scanf("%f", &altura3);
	fflush(stdin);
	
	if (altura1<=0 || altura2<=0 || altura3<=0)
	printf("\n> Altura inválida.\n");
	else if (altura1>=3 || altura2>=3 || altura3>=3)
	printf("\n> Altura inválida.\n");
	else if (altura1<altura2 && altura1<altura3)
	printf("\n> %s> tem %.2fm de altura e é a pessoa mais baixa.\n", nome1, altura1);
	else if (altura2<altura1 && altura2<altura3)
	printf("\n> %s> tem %.2fm de altura e é a pessoa mais baixa.\n", nome2, altura2);
	else if (altura3<altura2 && altura3<altura1)
	printf("\n> %s> tem %.2fm de altura e é a pessoa mais baixa.\n", nome3, altura3);
	else if (altura1==altura2 && altura2==altura3 && altura3==altura1)
	printf("\n> As três pessoas tem a mesma altura.\n");
	
		
	system("pause");
	return 0;
 }
