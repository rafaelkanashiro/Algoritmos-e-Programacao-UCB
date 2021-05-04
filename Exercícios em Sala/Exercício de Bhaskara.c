//Entrada: a, b, c
//Saída: x1 e x2
//Processamento: Calcular Bhaskara

#include<stdio.h> //Biblioteca para comandos de entrada e saída: printf e scanf
#include<math.h> //Biblioteca matemática

int main(){  //Início do algoritmo: função main
	
	double a, b, c, x1, x2, delta; //Variável double %lf
	printf("Digite o valor de A: "); //Solicitar informações ao usuário
	scanf("%lf", &a); //Scan da variável a
	printf("Digite o valor de B: "); //Solicitar informações ao usuário
	scanf("%lf", &b); //Scan da variável b
	printf("Digite o valor de C: "); //Solicitar informações ao usuário
	scanf("%lf", &c); //Scan da variável c
	
	delta = pow(b,2) - 4*a*c; //Cálculo do delta
	
	if (a == 0 || delta < 0) { //Condição
	printf("Nao foi possivel calcular!\n"); //Exibir texto na tela
		}
	else { //Senão
	x1 = (-(b) + sqrt(pow(b,2) - 4*a*c)) / (2*a); //Cálculo x1
	x2 = (-(b) - sqrt(pow(b,2) - 4*a*c)) / (2*a); //Cálculo x2
	printf("X1 = %.5lf\n", x1); //Exibir resultado na tela
	printf("X2 = %.5lf\n", x2); //Exibir resultado na tela
		}
	
		system("pause"); //Função para que o executável não feche sozinho
		return 0; //Retorno da função
 } //Final do algoritmo
