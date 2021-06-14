//Nome completo: Rafael Concei��o Kanashiro 
//Matr�cula: UC21106234
//Curso: Engenharia de Software 

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

#define RED "\x1b[91m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define BHWHT "\e[0;97m"
#define RESET "\x1b[0m"

int main(){
	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	//Nome do destino
	char nomeDestino[60];
	//Vari�veis do avi�o
	int quantAssentos = 0, quantPassagens = 0;
	//Valores das passagens
	int passagensDesconto = 0, passagensSemDesconto = 0, quantidadeTotalPassagens = 0, idadePassageiros;
	float valorPassagem = 0, valorPassagemDesconto = 0, valorPassagemSemDesconto = 0, valorTotalPassagens = 0;
	//Fun��es do menu
	int menuOpcoes;
	//Verificar assentos
	char disponibilidade[10][20];
	int i = 0, j = 0, contador = 0, assentos[10][20], assentoEscolhido;
	//Efetuar uma reserva
	int id = 0, idMatriz[10][20], idCliente;
	//Relat�rio do voo
	int assentosDisponiveis = 0, assentosReservados = 0, assentosConfirmados = 0;
	
	//Colocando a cor branca nos textos
	printf(BHWHT);
	
	//GUI
	printf("+----------------------------------------------------------------------------------+\n");
	printf("| Seja bem-vindo ao sistema de vendas de passagens a�reas da Salumar Linhas A�reas |\n");
	printf("+----------------------------------------------------------------------------------+\n\n");
	
	//Informa��es iniciais como: destino, quantidade de assentos e valor da passagem
	do{
		printf("> Informe o nome do destino: \n> ");
		fgets(nomeDestino, 60, stdin);
		fflush(stdin);
	}while(strlen(nomeDestino) == 0 || nomeDestino[0] == '\r' || nomeDestino[0] == '\n');
	
	do{
		printf("\n> Informe a quantidade de assentos existentes no avi�o selecionado para o destino: (M�n. 90 - M�x. 200) \n> ");
		scanf("%d", &quantAssentos);
		fflush(stdin);
	}while(quantAssentos < 90 || quantAssentos > 200);
	
	printf("\n> Informe o valor da passagem: \n> ");
	scanf("%f", &valorPassagem);
	fflush(stdin);
	
	//Matriz para cadastrar assentos
	for (i = 0; i < 10; i++){
	    for (j = 0; j < 20; j++){
		    contador++;
		    assentos[i][j] = contador;
		}
	}
	for (i = 0; i < 10; i++){
		for (j = 0; j < 20; j++){
			if (assentos[i][j] <= quantAssentos){
				disponibilidade[i][j] = 'D';
			}
		}  
	}
	
	system("cls");
	
	//Menu
	while(menuOpcoes != 6){
	
		printf(BHWHT);
	
		printf("+--------------------+\n");
		printf("| Painel do vendedor |\n");
		printf("+--------------------+\n\n");
	
		printf("> Voo com destino para %s> %d assentos e com o valor da passagem de R$%.2f.\n\n", nomeDestino, quantAssentos, valorPassagem);
	
	
		printf("> O que voc� deseja fazer?\n");
		printf("[1] -> Verificar a ocupa��o do Destino (Mapa do avi�o).\n");
		printf("[2] -> Efetuar uma reserva.\n");
		printf("[3] -> Confirmar uma reserva.\n");
		printf("[4] -> Cancelar uma reserva.\n");
		printf("[5] -> Relat�rio do voo.\n"); //Desnecess�rio
		printf("[6] -> Finalizar programa.\n> ");
		scanf("%d", &menuOpcoes);
		fflush(stdin);
	
		//Op��es do menu
		switch(menuOpcoes){
			case 1:
				//Verificar a ocupa��o do Destino (Mapa do avi�o)
				system("cls");
			
				printf("+-------------------------------------------------+\n");
				printf("| Verificar a ocupa��o do Destino (Mapa do avi�o) |\n");
				printf("+-------------------------------------------------+\n\n");
				printf("> Voo com destino para %s> %d assentos e com o valor da passagem de R$%.2f.\n\n", nomeDestino, quantAssentos, valorPassagem);
			
				for(j = 0; j < 20; j++){
					for(i = 0; i < 10; i++){
						if(assentos[i][j] <= contador && (disponibilidade[i][j] == 'D' || disponibilidade[i][j] == 'R' || disponibilidade[i][j] == 'C')){
							//Se o assento estiver dispon�vel ir� apresentar a letra D com a cor verde
							if (disponibilidade[i][j]== 'D'){
								printf(GREEN "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
							//Se o assento estiver reservado ir� apresentar a letra R com a cor vermelha
							else if (disponibilidade[i][j] == 'R'){
								printf(RED "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
							//Se o assento estiver confirmado ir� apresentar a letra C com a cor azul
							else if (disponibilidade[i][j]== 'C') {
								printf(BLUE "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
						} 
					} 
				printf("\n");
				}
				printf(BHWHT "\n> Disponibilidade de assentos:" RESET);
			
				printf(GREEN "\n> Verde - Dispon�vel." RESET);
				printf(RED "\n> Vermelho - Reservado." RESET);
				printf(BLUE "\n> Azul - Confirmado.\n\n" RESET);
		
				system("pause");
				system("cls");
				break;
			case 2:
				//Efetuar uma reserva
				
				//Pegar idade do passageiro para definir o pre�o da passagem
				system("cls");
				
				printf("+---------------------+\n");
				printf("| Efetuar uma reserva |\n");
				printf("+---------------------+\n\n");
				
				printf("Qual a idade do passageiro? ");
				scanf("%d", &idadePassageiros);
				fflush(stdin);
				
				if(idadePassageiros <= 5)
				passagensDesconto++;
				else
				passagensSemDesconto++;
	
				valorPassagemDesconto = (passagensDesconto * valorPassagem) / 2;
				valorPassagemSemDesconto = passagensSemDesconto * valorPassagem;
				valorTotalPassagens = valorPassagemDesconto + valorPassagemSemDesconto;
				quantidadeTotalPassagens = passagensDesconto + passagensSemDesconto;
				
				system("cls");
				
				printf("+---------------------+\n");
				printf("| Efetuar uma reserva |\n");
				printf("+---------------------+\n\n");
		
				id++;
			
				for(j = 0; j < 20; j++){
					for(i = 0; i < 10; i++){
						if(assentos[i][j] <= quantAssentos && (disponibilidade[i][j] == 'D' || disponibilidade[i][j] == 'R' || disponibilidade[i][j] == 'C')){
							if(disponibilidade[i][j] == 'D'){
								printf(GREEN "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
							else if(disponibilidade[i][j] == 'R'){
								printf(RED "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
							else if(disponibilidade[i][j] == 'C'){
									printf(BLUE "%.3d ", assentos[i][j]);
									printf("%c ", disponibilidade[i][j]);
							}
						}
					} 
				printf("\n");	   
				}
				
				printf(BHWHT "\n> Informe o assento escolhido: \n> ");
				scanf("%d", &assentoEscolhido);
				fflush(stdin);
				
				system("cls");
				
				printf("+---------------------+\n");
				printf("| Efetuar uma reserva |\n");
				printf("+---------------------+\n\n");
			
				for(j = 0; j < 20; j++){
					for(i = 0; i < 10; i++){
						if(assentos[i][j] == assentoEscolhido){
							disponibilidade[i][j] = 'R';
							idMatriz[i][j] = id;
						} 
					}	   
				}
		
				for(j = 0; j < 20; j++){
					for(i = 0; i < 10; i++){
						if(assentos[i][j] <= quantAssentos && (disponibilidade[i][j] == 'D' || disponibilidade[i][j] == 'R' || disponibilidade[i][j] == 'C')){
							if(disponibilidade[i][j] == 'D'){
								printf(GREEN "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
							else if(disponibilidade[i][j] == 'R'){
								printf(RED "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
							else if(disponibilidade[i][j] == 'C'){
								printf(BLUE "%.3d ", assentos[i][j]);
								printf("%c ", disponibilidade[i][j]);
							}
						}
					} 
				printf("\n");	   
				}
				//Informar o assento escolhido e o n�mero da reserva
				printf(BHWHT);
				
				if(idadePassageiros <= 5)
				printf("\n> Foi reservada uma passagem com desconto no valor total de R$%0.2f.", valorPassagemDesconto);
				else
				printf("\n> Foi reservada uma passagem sem desconto no valor total de R$%0.2f.", valorPassagemSemDesconto);
				
				printf("\n> O assento escolhido foi o %d e o n�mero da reserva � %d.", assentoEscolhido, id);
				printf("\n> ** Guarde o n�mero da reserva pois ele ser� necess�rio para confirmar ou cancelar a passagem. **\n\n");
				
				system("pause");
				system("cls");
				break;
			case 3:
				//Confirmar uma reserva
				system("cls"); 
				
				printf("+-----------------------+\n");
				printf("| Confirmar uma reserva |\n");
				printf("+-----------------------+\n\n");
				
				printf("> Informe o n�mero da reserva para a confirmar: \n> ");
		
				do{
					scanf("%d", &idCliente);
					if(idCliente > id){
						printf("\n> N�mero de reserva n�o cadastrado, insira um n�mero de reserva v�lido: \n> ");
					}
				}while(idCliente > id);
				
				for(j = 0; j < 20; j++){
					for(i = 0; i < 10; i++){
						if(idMatriz[i][j] == idCliente && disponibilidade[i][j] == 'R'){
							disponibilidade[i][j] = 'C';
						}
					}
				}
				printf("\n> Reserva %d confirmada com sucesso!\n\n", idCliente);
				
				system("pause");
				system("cls");
				break;
			case 4:
				//Cancelar uma reserva
				system("cls");
		
				printf("+----------------------+\n");
				printf("| Cancelar uma reserva |\n");
				printf("+----------------------+\n\n");
				
				printf("> Informe o n�mero da reserva para a cancelar: \n> ");
		
				do{
					scanf("%d", &idCliente);
					if(idCliente > id){
					printf("\n> N�mero de reserva n�o cadastrado, insira um n�mero de reserva v�lido: \n> ");
					}
				}while(idCliente > id);
				
				for(j = 0; j < 20; j++){
					for(i = 0; i < 10; i++){
						if(idMatriz[i][j] == idCliente && (disponibilidade[i][j] == 'R' ||disponibilidade[i][j] == 'C')){
							disponibilidade[i][j] = 'D';
						}
					}	 
				}
				printf("\n> Reserva %d cancelada com sucesso!\n\n", idCliente);
				
				system("pause");
				system("cls");
				break;
			case 5:
				//Relat�rio do voo
				system("cls");
				
				for(j = 0; j < 20; j++){
					for(i = 0; i < 10; i++){
						if(assentos[i][j] <= contador && (disponibilidade[i][j] == 'D' || disponibilidade[i][j] == 'R' || disponibilidade[i][j] == 'C')){
							if(disponibilidade[i][j] == 'D')
								assentosDisponiveis++;
							else if(disponibilidade[i][j] == 'R')
								assentosReservados++;
							else if(disponibilidade[i][j]=='C')
								assentosConfirmados++;
						}
					}
				}
				
				printf("+------------------+\n");
				printf("| Relat�rio do voo |\n");
				printf("+------------------+\n\n");
				
				printf("> Voo com destino para %s> %d assentos e com o valor da passagem de R$%.2f.\n\n", nomeDestino, quantAssentos, valorPassagem);
				printf("> Assentos dispon�veis: %d/%d\n", assentosDisponiveis, quantAssentos);
				printf("> Assentos reservados: %d/%d\n", assentosReservados, quantAssentos);
				printf("> Assentos confirmados: %d/%d\n", assentosConfirmados, quantAssentos);
				printf("> S�o %d passagens no valor total de R$%0.2f.\n\n", quantidadeTotalPassagens, valorTotalPassagens);
				
				system("pause");
				system("cls");
				break;
			case 6:
				//Finalizar o programa
				system("cls");
				
				printf("> O programa foi finalizado.\n\n");
				
				system("pause");
				return 0;
			default:
				//Mensagem de erro caso o usu�rio coloque uma op��o inv�lida
				system("cls");
				printf("> Op��o inv�lida! Tente novamente.\n\n");
		}
	}
	
	system("pause");
	return 0;
 }
