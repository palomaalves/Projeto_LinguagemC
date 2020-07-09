//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

int main(){
	//A empresa CovidSoftware concedeu um bônus de 20% do valor do salário a todos os
	//funcionários com tempo de trabalho na empresa igual ou superior a cinco anos e de 10% aos
	//demais funcionários. Faça um algoritmo que leia o salário e a quantidade de anos de casa de
	//um funcionário, calcule e imprima o valor do bônus.

	float salario,resultado1, resultado2;
	int tempo;
	
	printf("Digite seu salario: ");
	scanf("%f*c",&salario);
	printf("Quantos anos voce trabalha na empresa: ");
	scanf("%d*c",&tempo);
	
	if(tempo>=5){
		resultado1=salario*0.2;
		printf("O valor do seu bonus e %.2f",resultado1);
	}else{
		resultado2=salario*0.1;
		printf("O valor do seu bonus e %.2f",resultado2);
		}

		
	getchar();
	return 0;
}
