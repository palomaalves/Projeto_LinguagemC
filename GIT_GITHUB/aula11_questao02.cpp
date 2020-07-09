//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

	/*Faça um programa para ler a nota da prova de 5 alunos e armazenar em
um vetor, em seguida, calcular e imprimir a média geral entre os alunos.*/ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{
int i; 
int vetor1[5], soma, qtd;
soma=0;
qtd=0;

	for (i=0; i<5; i++)
	{
		printf("Digite a nota do aluno: ");
		scanf("%d", &vetor1[i]);
	}
	for (i=0; i<5; i++)
	{
		printf("%d ", vetor1[i]);
		soma= soma+vetor1[i];
		qtd++;
	}
	printf("\nA Media geral foi : %d", soma/qtd);
	
return 0;
}


