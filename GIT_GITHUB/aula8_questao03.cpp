//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

	/*3 � Fa�a um programa que receba um n�mero N inteiro maior que 1, verifique se o n�mero fornecido � primo 
	ou n�o e mostre uma mensagem de n�mero primo ou de n�mero n�o primo. 
	Um n�mero � primo quando � divis�vel apenas por 1 e por ele mesmo.*/ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{
	setlocale(LC_ALL, "");
	int numero, i, resultado = 0;
	 
	printf("Digite um n�mero: ");
	scanf("%d*c", &numero);
	 
	for (i = 2; i <= numero/i; i++){
	    if (numero % i == 0){
	       resultado++;
	       break;
    	}
	}
 
	if (resultado == 0){
		printf("%d � um n�mero primo\n", numero);
	}
	else{
		printf("%d n�o � um n�mero primo\n", numero);
	}
	return 0;
}
