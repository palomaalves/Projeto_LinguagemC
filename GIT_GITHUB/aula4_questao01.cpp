//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

#include<stdio.h>
int main()
{
	//Fa�a um algoritmo que leia um n�mero inteiro. Calcular e imprimir a metade do n�mero,somente se ele for maior que 20
	
	float numero, resultado;
		
	// Recebe o numero
	printf("Digite um numero: ");
	scanf("%f%*c",&numero);
	
	// Testar o numero se eh maior que 20
	if (numero > 20){
		resultado = numero/2;
		printf("\nA metade do numero = %.1f ", resultado);
	}else{
		printf("\nO numero deve ser maior que 20!");
	}
	
	getchar();
	return 0;
}
