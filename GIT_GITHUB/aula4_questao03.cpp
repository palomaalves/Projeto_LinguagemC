//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>
int main()
	//Ler dois valores inteiros e apresentar a diferença do maior pelo menor. 
{
	int numero1, numero2, resultado1, resultado2;
	
	// Recebe os numeros
	printf("Digite o primeiro numero1: ");
	scanf("%d%*c",&numero1);
	printf("Digite o segundo numero2: ");
	scanf("%d%*c",&numero2);
	
	if (numero1 != numero2){	
		if (numero1 > numero2){
			resultado1=numero1-numero2;
			printf("\nA diferenca entre os nuemros =%d", resultado1);		
		}else{
			resultado2=numero2-numero1;
			printf("\nA diferenca entre os nuemros =%d", resultado2);
		}
	}else{
		printf("Os numeros sao iguais! Tente novamente.");
	}
	
	getchar();
	return 0;

}
