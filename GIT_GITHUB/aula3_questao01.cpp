//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Construir um algoritmo que calcule a �rea de um tri�ngulo dado a base
	//e a altura. 
	
	float base, altura, area;
	
	// Recebe as tr�s vari�veis
	printf("Digite a base: ");
	scanf("%f%*c",&base);
	printf("Digite a altura: ");
	scanf("%f%*c",&altura);
	
	// Calcula a area do triangulo
	area = (base * altura)/2;
	
	// Mostra o resultado da area 
	printf("\nArea = %.0f\n",area);
	
	getchar();
	return 0;
}
