/*Crie um programa que preencha uma matriz 4X3 com números inteiros e some cada uma das linhas,
armazenando o resultado das somas em um vetor. A seguir, o programa deverá multiplicar cada elemento da matriz 
soma da linha correspondente e mostrar a matriz rsultante..*/
	
#include<stdio.h>
#include <locale.h>

int main() 
{
	int m[3][4];
	int r[3][4];
	int soma[3];
	
	int valor=1;
	
	printf("\nMatriz m: ");	
	printf("\n");	
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			m[i][j]=valor;
			valor++;
			printf("%d ", m[i][j]);
			
		}
	}
	
	printf("\n");
	printf("\nVetor s: ");	
	printf("\n");
	for (int i=0; i<3; i++)
	{
		soma[i]=0;
		for (int j=0; j<4; j++)
		{
			soma[i]=soma[i]+ m[i][j];
			printf("%d ", soma[i]);
		}
	}
	
	printf("\n");
	printf("\nMatriz r: ");	
	printf("\n");
	
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			r[i][j]=m[i][j]* soma[i];
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
		
return 0;
}
