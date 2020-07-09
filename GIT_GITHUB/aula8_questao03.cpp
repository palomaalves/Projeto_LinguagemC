//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

	/*3 – Faça um programa que receba um número N inteiro maior que 1, verifique se o número fornecido é primo 
	ou não e mostre uma mensagem de número primo ou de número não primo. 
	Um número é primo quando é divisível apenas por 1 e por ele mesmo.*/ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{
	setlocale(LC_ALL, "");
	int numero, i, resultado = 0;
	 
	printf("Digite um número: ");
	scanf("%d*c", &numero);
	 
	for (i = 2; i <= numero/i; i++){
	    if (numero % i == 0){
	       resultado++;
	       break;
    	}
	}
 
	if (resultado == 0){
		printf("%d é um número primo\n", numero);
	}
	else{
		printf("%d não é um número primo\n", numero);
	}
	return 0;
}
