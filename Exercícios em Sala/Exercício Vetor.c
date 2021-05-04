//1. Escrever um programa que declare um vetor de reais e leia e imprima as notas de 30 alunos.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	float notasAlunos[30];
	int i;
	
	for(i=0; i<30; i++) {
	printf("> Insira a nota do %dº aluno: \n> ", i + 1);
	scanf("%f", &notasAlunos[i]);
	printf("\n");
	}
	
	for(i=0; i<30; i++)
	printf("> A nota do %dº aluno é %0.1f.\n", i+1, notasAlunos[i]);
	
	printf("\n");
	
	system("pause");
	return 0;
 }
