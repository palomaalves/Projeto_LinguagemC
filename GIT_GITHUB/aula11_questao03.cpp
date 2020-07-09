//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

	/*3) Faça um programa para ler 5 valores e, em seguida, mostrar todos os
valores lidos juntamente com o maior, o menor e a média entre os valores.*/ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{
int vetor1[5];
int i, maior, menor, soma, qtd;
soma=0;
qtd=0;

	for (i=0; i<5; i++)
	{
		printf("Digite o valor: ");
		scanf("%d", &vetor1[i]);
	}
	maior=vetor1[0];
	menor=maior;
	
	for (i=0; i<5; i++)
	{
		printf("%d ", vetor1[i]);
		soma=soma+vetor1[i];
		qtd++;
		if (vetor1[i]> maior){
		maior=vetor1[i];}
		else{
		menor=vetor1[i];}
	}
			
	
	printf("\nMaior valor : %d\n", maior);
	printf("Menor valor : %d\n", menor);
	printf("Media dos valores : %d", soma/qtd);
return 0;
}
 
