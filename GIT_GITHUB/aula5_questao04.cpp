/*Equipe:
Alequissandra Rayane Farias Santos Silva
Beatriz Lira Martins
Juliete Cilene de Albuquerque Sérvio
Paloma Corrêa Alves 
Thulio Mateus de Oliveira Queiroz

4 – Um funcionário receberá aumento de acordo com o seu plano de trabalho. 
Faça um algoritmo que leia o plano de trabalho e o salário atual de um funcionário e calcule e imprima o
seu novo salário.
PLANO AUMENTO
A      10 %
B      15 %
C      20 %*/

#include <stdio.h>
#include <locale.h>

int main()
{

	int  salario, plano, resultado;

	printf ("Digite o valor do seu salario:\n");
	scanf("%d",&salario);
	printf("Digite a opcao 1 para de plano A que tem 10 por cento de aumento\n");
	printf("Digite a opcao2 para de plano B que tem 15 por cento de aumento\n");
	printf("Digite a opcao 3 para de plano C que tem 20 por cento de aumento\n");
	scanf("%d",&plano);


	switch(plano)
	{
		case(1):	
			resultado = salario*1.10;
			printf("Seu novo salario: R$ %d\n",resultado);
			break;
		case(2):	
			resultado = salario*1.15;
			printf("Seu novo salario: R$ %d\n",resultado);
			break;
		case(3):	
			resultado = salario*1.20;
			printf("Seu novo salario: R$ %d\n",resultado);
			break;
	}

return 0;
 
}

