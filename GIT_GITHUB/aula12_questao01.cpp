/*Faça um programa que preencha uma matriz s(2 x 2), em seguida calcule e mostre a matriz r, 
	resultante da multiplicação dos elementos de M pelo seu maior elemento.*/
	
#include<stdio.h>
#include <locale.h>
 
int main() 
{
	int s[2][2];
	int r[2][2];
	int i, j, maior;

		
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Digite o elemento da linha %d e da coluna %d: ", i+1, j+1), 
			scanf("%d", &s[i][j]);
		}
	}
	
	maior= s[0][0];
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			if (s[i][j]> maior){
			maior=s[i][j];}
		}
	}
	
	printf("\nMatriz r: ");	
	printf("\n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			r[i][j]=s[i][j]* maior;
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
		
return 0;
}
