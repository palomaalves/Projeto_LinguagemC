/*Equipe:
Alequissandra Rayane Farias Santos Silva
Beatriz Lira Martins
Juliete Cilene de Albuquerque Sérvio
Paloma Corrêa Alves 
Thulio Mateus de Oliveira Queiroz*/

//2 – Faça um algoritmo que receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário.
/*ESCOLHA DO USUÁRIO    OPERAÇÃO
     M                MÉDIA ENTRE OS NÚMEROS DIGITADOS
     S                DIFERENÇA DO MAIOR PELO MENOR
     P                PRODUTO ENTRE OS NÚMEROS DIGITADOS
     D                DIVISÃO DO PRIMEIRO PELO SEGUNDO
*/

#include <iostream>
using namespace std;

int main()
{
	float numero1, numero2, resultado;
	char opcao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	printf("Digite uma opcao para escolher\n"); 
	printf("(M) MEDIA ENTRE OS NUMEROS DIGITADOS\n");
	printf("(S) DIFERENCA DO MAIOR PELO MENOR \n");
	printf("(P) PRODUTO ENTRE OS NUMEROS DIGITADOS\n");
	printf("(D) DIVISAO DO PRIMEIRO PELO SEGUNDO\n");
	scanf("%s", &opcao);
	

	
	
	switch (opcao){
	
		case ('M'):
			resultado= (numero1+numero2)/2;
			printf("A MEDIA ENTRE OS NUMEROS DIGITADOS EH : %.2f ",resultado);
			break;
		
		case ('S'):
			if(numero1>numero2){
				resultado=numero1-numero2;
				printf("A DIFERENCA DO MAIOR PELO MENOR EH: %.2f ",resultado);
			}else if(numero1<numero2){
				resultado=numero2-numero1;
				printf("A DIFERENCA DO MAIOR PELO MENOR EH: %.2f ",resultado);
			}else if(numero1=numero2){
				resultado=0;
				printf("A DIFERENCA DO MAIOR PELO MENOR EH: %.2f, POIS SAO NUMEROS IGUAIS ",resultado);
			}
			break;		
		
		case ('P'):
			resultado=numero1*numero2;
			printf("O PRODUTO ENTRE OS NUMEROS DIGITADOS EH: %.2f ",resultado);	
			break;
 		
		case ('D'):
 			resultado=numero1/numero2;
			printf("DIVISAO DO PRIMEIRO PELO SEGUNDO EH: %.2f",resultado);
			break;
		
		default:
			printf("Invalido");
			break;
	}
	return 0;
}
