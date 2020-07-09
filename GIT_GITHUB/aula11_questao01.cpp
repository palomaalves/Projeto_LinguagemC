//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

	/*1) Crie um programa que leia 6 valores inteiros, armazene em um vetor e,
	em seguida, mostre na tela os valores lidos na ordem inversa. */ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{
int vetor1[6];
int i;

	for (i=0; i<6; i++)
	{
		printf("Digite o valor do Vetor1: ");
		scanf("%d", &vetor1[i]);
	}
	for (i=5; i>=0; i--)
	{
		printf("%d ", vetor1[i]);
	}
	printf("\n");
	
	
return 0;

}


