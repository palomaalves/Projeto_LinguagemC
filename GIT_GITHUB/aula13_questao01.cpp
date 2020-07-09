/*Crie um programa que preencha uma matriz 5X3 com notas de dez alunos em três provas.
O programa deverá mostrar um relatório com o números de alunos (número da linha) e a prova em que cada aluno obteve
a menor nota. Ao final do relatório, deverá mostrar quantos alunos tiveram menor nota em cada uma das provas:
na prova 1, na prova 2, na prova 3.*/
	
#include<stdio.h>
#include <locale.h>

int main() 
{
	int m[3][3];
	int r[3][1];
	int i, j, menor;
	int qtd_prova[3], menor_prova;

		
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("Digite a nota da prova %d do aluno %d: ", j+1, i+1), 
			scanf("%d", &m[i][j]);
		}
	}
	printf("\nMatriz m: ");	
	printf("\n");
	for (i=0; i<3; i++)
	{
		printf("Aluno %d", i+1);
		printf(" Notas: ");
		for (j=0; j<3; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	
	qtd_prova[0]=0;
	qtd_prova[1]=0;
	qtd_prova[2]=0;

	for (i=0; i<3; i++)
	{
		menor=m[i][0];
		menor_prova=0;
		
		for (j=0; j<3; j++)
		{
			if(m[i][j]< menor){
			menor=m[i][j];
			menor_prova= j;}
		}
		if(menor_prova==0){
			qtd_prova[0]++;}
		if(menor_prova==1){
			qtd_prova[1]++;}
		if(menor_prova==2){
			qtd_prova[2]++;}
			
		printf("A menor nota do aluno %d foi na prova %d", i+1, menor_prova+1);
		printf("\n");
	}
	
	for (i=0; i<3; i++)
	{
		printf("\n Qunatidade de alunos com a menor nota na Prova %d = %d", i+1, qtd_prova[i]);
	}
	
		
return 0;
}
