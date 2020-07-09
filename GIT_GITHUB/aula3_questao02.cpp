//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include<stdio.h>
int main()
{
	//Construir um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
	//• A idade dessa pessoa;
	//• Quantos anos essa pessoa terá em 2025.
	
	int ano, ano_atual, idade, idade2025;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d%*c",&ano);
	printf("Digite ano atual: ");
	scanf("%d%*c",&ano_atual);
	
	idade=ano_atual-ano;
	printf("\nSua idade eh %d\n", idade);
	idade2025=2025-ano;
	printf("\nSua idade em 2025 sera %d", idade2025);

	return 0;
	
}
	
