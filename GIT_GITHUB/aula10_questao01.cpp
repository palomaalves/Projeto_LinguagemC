//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

	/*1 � Fa�a um programa que preencha dois vetores de 10 elementos num�ricos cada um e mostre o vetor
	resultante da intercala��o deles. */ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{

int vetor1[5], vetor2[5], vetor3[10];
int i, j;
j=0;	

	for (i=0; i<5; i++)
	{
		printf("Digite o %d o numero do Vetor1: ", i+1);
		scanf("%d", &vetor1[i]);
		vetor3[j]= vetor1[i];
		j++;
	
		printf("Digite o %d o numero do Vetor2: ", i+1);
		scanf("%d", &vetor2[i]);
		vetor3[j]= vetor2[i];
		j++;
	}
	for (i=0; i<5; i++)
	{
		printf("%d ", vetor1[i]);
	}
	printf("\n");
	
	for (i=0; i<5; i++)
	{
		printf("%d ", vetor2[i]);
	}
	printf("\n");
		
	for (i=0; i<10; i++)
	{
		printf("%d ", vetor3[i]);
	}
	
return 0;

}	
		
