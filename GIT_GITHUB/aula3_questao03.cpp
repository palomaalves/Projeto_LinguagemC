//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include<stdio.h>
#include<math.h>

int main()
{
	/* Sabe-se que um quilowatt de energia custa 1/500 do salário mínimo.
	Faça um algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. 
	Calcule e mostre:
	• O valor, em reais, de cada quilowatt;
	• O valor, em reais, a ser pago por essa residência
	• O valor, em reais, a ser pago com desconto de 15%*/

	float sm, kw, valor1, valor2, valor3;
	// Recebe o salario minimo e a quantidade de quilowatts consumida por uma residencia
	printf("Digite seu salario minimo: ");
	scanf("%f%*c",&sm);
	printf("Digite a quantidade de quilowatts consumida: ");
	scanf("%f%*c",&kw);
	
	// Calcula o valor em reais de cada quilowatt consumida 
	valor1 = sm/500;
	valor2 = valor1*kw;
	valor3 = valor2*0.85;
	
	// Mostra os resultados
	printf("\nO valor, em reais, de cada kwatt = R$ %.2f\n", valor1);
	printf("\nO valor, em reais, a ser pago por essa residencia = R$ %.2f\n",valor2);
	printf("\nO valor, em reais, a ser pago com desconto de 15% = R$ %.2f\n",valor3);
	

	getchar();
	return 0;
}

