#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

int main()
{
	// Fa�a um algoritmo que receba a idade de uma pessoa e mostre se ela � maior de idade
	//ou n�o.
	
	int idade;
	//recebe a idade
	printf("Digite sua idade: ");
	scanf("%d%*c",&idade);
	
	//saber se � maior de 18 anos 
	if (idade >=18){
		printf("\nEh maior de idade, ou seja, maior de 18 anos!\n");
	}else{
		printf("Nao eh maior de idade\n");
	}
	getchar();
	return 0;
}
	
