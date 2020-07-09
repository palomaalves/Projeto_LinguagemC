//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

	/*1 – Escreva um programa que imprima os N primeiros números da sequância de Fibonacci, onde cada termo 
	é obtido pela soma dos dois termos anteriores.*/ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{
	int termo1, termo2, n, i, soma;
	
	printf("Digite quantos numeros da sequencia de Fibonacci voce gostaria de saber: ");
	scanf("%d*c", &n);
	 	 
	termo1=0;
	termo2=1;
	
	for (i= 0; i<n; i++){
	    printf("%d, ",termo1);
	    soma=termo1+ termo2;
	    termo1=termo2;
	    termo2=soma;
	}
    
	printf("A sequencia Fibonacci com %d elementos", n);
	return 0;
}
