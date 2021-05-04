//2. Altere o algoritmo anterior considerando que não se conhece quantos alunos estão na turma. O número de aluno será informado pelo usuário.

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
	printf("\n> Insira a nota do %dº aluno: \n> ", i + 1);
	scanf("%f", &notasAlunos[i]);
	}
	
	printf("\n");
	
	for(i=0; i<quantAlunos; i++) {
	printf("> A nota do %dº aluno é %0.1f.\n", i+1, notasAlunos[i]);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
 }
