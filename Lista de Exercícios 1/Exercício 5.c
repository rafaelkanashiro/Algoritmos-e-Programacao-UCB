#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int quantidadeTotalFios, quantidadeRolos, quantidadeMetros;
	printf("------------------------------------------------------------------------\n");
	printf("| Calcular a quantidade de rolos e de metros avulsos de uma construção |\n");
	printf("------------------------------------------------------------------------\n");
	printf("> Insira a quantidade total de fios: ");
	scanf("%d", &quantidadeTotalFios);
	quantidadeRolos = quantidadeTotalFios / 50;
	quantidadeMetros = quantidadeTotalFios % 50;
	if (quantidadeRolos == 0) {
	printf("> São necessários %d metro(s) avulso(s).\n\n", quantidadeMetros);
		}
	else printf("> São necessários %d rolo(s) e %d metro(s) avulso(s).\n\n", quantidadeRolos, quantidadeMetros);
	

	system("pause");
	return 0;
 }
