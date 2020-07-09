/*Grupo:
1-Paloma Corrêa Alves - 202000716
2-Beatriz Lira Martins 2020002049
3-Thulio Queiroz 202003804
4-Juliete C. de Albuquerque Sérvio 202003843
5-Alequissandra Rayane Farias Santos Silva 202000574*/

//1 – Faça um programa que leia 20 números quaisquer e conte quantos são negativos.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	float numero;
	int contador, positivo, negativo;
	
	contador=1;
	positivo=0;
	negativo=0;
	
	while (contador<=20){
		printf("Digite qualquer valor negativo ou positivo:\n");
		scanf("%f*c",&numero);
	contador++;
	
		if(numero>=0){positivo=positivo+1;}
		else{negativo=negativo+1;}
	}
	printf("Numeros Negativos: %d\n",negativo);
	return 0;
	
}
