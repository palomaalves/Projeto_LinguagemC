//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>

	/*Escreva um programa que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado*/
int main()
{
	int i;
	float numero, numero_max, numero_minim;
	
	printf("Digite um numero: ");
	scanf("%f*c",&numero);	
	numero_max=numero;
	numero_minim=numero;
	
	for(i=1; i<=15; i++){
	printf("Digite um numero: ");
	scanf("%f*c",&numero);	
	if(numero>numero_max){
		numero_max=numero;
	}else if(numero<numero_minim){
		numero_minim=numero;
	}}
	
		
	printf("O maior numero digitado foi: %.2f", numero_max);
	printf("\nO menor numero digitado foi: %.2f", numero_minim);

		
	return 0;
}
