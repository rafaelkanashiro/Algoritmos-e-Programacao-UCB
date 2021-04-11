#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade;
	char placaCarro[9];
	
	printf("-----------------------\n");
	printf("| Consultor de Multas |\n");
	printf("-----------------------\n");
	printf("> Insira a velocidade do carro (em km/h): ");
	scanf("%d", &velocidade);
	fflush(stdin);
	printf("> Insira a placa (no formato XXX-1234): ");
	fgets(placaCarro, 9, stdin);
	
	if (velocidade > 350) printf("> Velocidade inválida, execute o programa novamente.\n");
	else if (velocidade <= 0) printf("> Velocidade inválida, execute o programa novamente.\n");
	else if (velocidade > 80) printf("> O veículo da placa %s será multado por ter trafegado a %dkm/h no Eixo Rodoviário cujo limite é de 80km/h.\n", placaCarro, velocidade);
	else printf("> O veículo da placa %s não será multado pois trafegou dentro dos limites de velocidade.\n", placaCarro);
	
		system("pause");
		return 0;
 }
