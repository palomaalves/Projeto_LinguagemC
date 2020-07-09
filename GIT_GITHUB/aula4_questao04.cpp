//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include<stdio.h>
int main()
{
	// Ler dois números (ponto flutuante) e apresentá-los em ordem decrescente. 
	
	float numero1, numero2;
	
	// Recebe os numeros
	printf("Digite o primeiro numero: ");
	scanf("%f%*c",&numero1);
	printf("Digite o segundo numero: ");
	scanf("%f%*c",&numero2);
	
	if (numero1 != numero2){	
		if (numero1 > numero2){
			printf("\n%.2f maior que %.2f", numero1, numero2);		
		}else{
			printf("\n%.2f maior que %.2f", numero2, numero1);
		}
	}else{
		printf("Os numeros sao iguais! Tente novamente.");
	}
	
	getchar();
	return 0;
}
