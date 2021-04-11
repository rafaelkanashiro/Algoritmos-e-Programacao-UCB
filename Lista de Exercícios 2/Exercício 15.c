#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int horasUso;
	float valorPagamento;
	
	printf("---------------------------------------------------------\n");
	printf("| Calcular valor a ser pago a sua provedora de internet |\n");
	printf("---------------------------------------------------------\n");
	printf("> Voc� utilizou quantas horas de internet? ");
	scanf("%d", &horasUso);
	
	if (horasUso >=1 && horasUso <=20) {
	valorPagamento = 30;
	printf("\n> Voc� utilizou %d horas de internet e dever� pagar R$%.2f.\n", horasUso, valorPagamento);
	}
	else if (horasUso >= 21) {
	valorPagamento = 30 + ((horasUso - 20) * 3);
	printf("\n> Voc� utilizou %d horas de internet e dever� pagar R$%.2f.\n", horasUso, valorPagamento);
	}
	else if (horasUso == 0) {
	printf("\n> Voc� n�o utilizou a internet e nenhum valor dever� ser pago.\n");
	}
	else if (horasUso < 0) {
	printf("\n> Quantidade de horas utilizadas inv�lidas.\n");
	}
	
	system("pause");
	return 0;
 }
