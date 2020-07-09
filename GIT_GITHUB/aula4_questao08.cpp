//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>

	/*Escreva um programa que imprima a tabuada de um número N que deve ser informado pelo usuário. A tabuada deve
	ser calculada de 0 a 10. O resultado deve ser informado da seguinte forma Ex. 5 x 6 = 30.*/
int main()
{
	int tabuada, numero, resultado;
	
	printf("Digite um numero de 0 a 10: ");
	scanf("%d*c",&tabuada);
	
	numero=0;
	while(numero<=10){
		resultado=tabuada*numero;
		printf("\n %d * %d = %d", tabuada, numero, resultado);
		numero++;
	}
		
	getchar();
	return 0;
}
