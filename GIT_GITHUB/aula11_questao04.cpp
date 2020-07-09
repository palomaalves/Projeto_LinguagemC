//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

	/*4) Faça um programa que receba do usuário dois vetores, A e B, com 10
números inteiros cada. Crie um vetor denominado C calculando C = A - B.
Mostre na tela os dados do vetor C.*/ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{
int vetorA[3], vetorB[3], vetorC[3];
int i, j;

	for (i=0; i<3; i++)
	{
		printf("Digite o %d o numero do VetorA: ", i+1);
		scanf("%d", &vetorA[i]);		
	}
	for (i=0; i<3; i++)
	{
		printf("Digite o %d o numero do VetorB: ", i+1);
		scanf("%d", &vetorB[i]);
	}
	
	for (i=0; i<3; i++)
	{
		printf("%d ", vetorA[i]);
	}
	printf("\n");
	
	for (i=0; i<3; i++)
	{
		printf("%d ", vetorB[i]);
	}
	printf("\n");
		
	for (i=0; i<3; i++)
	{
		vetorC[i]=vetorA[i]-vetorB[i];
		printf("%d ", vetorC[i]);
	}
	
return 0;

}



