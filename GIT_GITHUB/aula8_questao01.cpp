/*Grupo:
1-Paloma Corr�a Alves - 202000716
2-Beatriz Lira Martins 2020002049
3-Thulio Queiroz 202003804
4-Juliete C. de Albuquerque S�rvio 202003843
5-Alequissandra Rayane Farias Santos Silva 202000574*/

//1 � Fa�a um programa que leia 20 n�meros quaisquer e conte quantos s�o negativos.

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
