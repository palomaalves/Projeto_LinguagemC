//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>

	/*Escreva um programa que l� 15 valores reais, encontra o maior e o menor deles e mostra o resultado*/
int main()
{
	int i, numero, numero_max, numero_minim;
	
	for(i=0; i<=15; i++){
	printf("Digite um numero: ");
	scanf("%d*c",&numero);	
	}
	
	if(numero>numero_max){
		numero_max=numero;
	}else if(numero<numero_minim){
		numero_minim=numero;
	}	
			
	
		
	return 0;
}
