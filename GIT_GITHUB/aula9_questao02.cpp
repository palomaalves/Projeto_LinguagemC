//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

	/*2 – Escreva um programa para calcular um valor de H determinado pela seguinte série
	H = 1/1 + 3/2 + 5/3 + 7/4 +...+ 99/50. */ 

#include<stdio.h>
#include <locale.h>
 
int main() 
{

float numerador, denominador, i, divisao, somaH;
	
	numerador=1;
	denominador=1;
	somaH=0;
		
	for (i=1; i<=99; i+=2){
	    
		divisao= numerador/denominador;
		printf("(%.0f/%.0f) = %.2f + \n",numerador,denominador, divisao);  
	    somaH+=divisao;
		numerador+=2;
	    denominador+=1;	    
	}
	
	printf("\n O valor de H eh %.2f", somaH);
	return 0;
}
