//Entrada: a, b, c
//Sa�da: x1 e x2
//Processamento: Calcular Bhaskara

#include<stdio.h> //Biblioteca para comandos de entrada e sa�da: printf e scanf
#include<math.h> //Biblioteca matem�tica

int main(){  //In�cio do algoritmo: fun��o main
	
	double a, b, c, x1, x2, delta; //Vari�vel double %lf
	printf("Digite o valor de A: "); //Solicitar informa��es ao usu�rio
	scanf("%lf", &a); //Scan da vari�vel a
	printf("Digite o valor de B: "); //Solicitar informa��es ao usu�rio
	scanf("%lf", &b); //Scan da vari�vel b
	printf("Digite o valor de C: "); //Solicitar informa��es ao usu�rio
	scanf("%lf", &c); //Scan da vari�vel c
	
	delta = pow(b,2) - 4*a*c; //C�lculo do delta
	
	if (a == 0 || delta < 0) { //Condi��o
	printf("Nao foi possivel calcular!\n"); //Exibir texto na tela
		}
	else { //Sen�o
	x1 = (-(b) + sqrt(pow(b,2) - 4*a*c)) / (2*a); //C�lculo x1
	x2 = (-(b) - sqrt(pow(b,2) - 4*a*c)) / (2*a); //C�lculo x2
	printf("X1 = %.5lf\n", x1); //Exibir resultado na tela
	printf("X2 = %.5lf\n", x2); //Exibir resultado na tela
		}
	
		system("pause"); //Fun��o para que o execut�vel n�o feche sozinho
		return 0; //Retorno da fun��o
 } //Final do algoritmo
