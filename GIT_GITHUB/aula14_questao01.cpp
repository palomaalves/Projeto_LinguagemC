

//1) Crie um programa que receba um nome do teclado e o imprima de trás
//para frente.

#include<stdio.h>
#include <string.h>

int main() 
{
	char nome[30];
	int tam;
	
	printf("Digite o nome: ");
	gets(nome);
	tam= strlen(nome);
	
  	printf("\n Tamanho  %d", tam);
  	printf("\n O nome de tras pra frente fica\n ");
  	
  	for(int i= tam; i >= 0; i--)
  	{
  	printf("%c", nome[i]);
  	}
    
	return 0;
}
