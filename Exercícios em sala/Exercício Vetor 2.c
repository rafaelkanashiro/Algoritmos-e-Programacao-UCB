//2. Altere o algoritmo anterior considerando que n�o se conhece quantos alunos est�o na turma. O n�mero de aluno ser� informado pelo usu�rio.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int i, quantAlunos;
	
	printf("> Qual a quantidade de alunos? \n> ");
	scanf("%d", &quantAlunos);
	
	float notasAlunos[quantAlunos];
	
	for(i=0; i<quantAlunos; i++) {
	printf("\n> Insira a nota do %d� aluno: \n> ", i + 1);
	scanf("%f", &notasAlunos[i]);
	}
	
	printf("\n");
	
	for(i=0; i<quantAlunos; i++) {
	printf("> A nota do %d� aluno � %0.1f.\n", i+1, notasAlunos[i]);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
 }
