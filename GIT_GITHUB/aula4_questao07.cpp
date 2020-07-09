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

int main()
{
	//Faça um algoritmo que leia a altura e o sexo de uma pessoa, calcule e mostre seu peso ideal
	//Usar as fórmulas a seguir para calcular o peso ideal:
	//Para o sexo masculino: (72,7 * altura) – 58,0
	//Para o sexo feminino: (62,1 * altura) – 44,7
	
	float peso,altura,resultado1, resultado2; 
	char sexo;    

	printf("Digite sua altura: ");    
	scanf("%f*c",&altura);    

	printf("Digite seu peso:");    
	scanf("%f*c",&peso);    

	printf("Digite seu sexo [F] ou [M] em Maisculo:");    
	scanf("%s*c",&sexo);        

	if(sexo == 'M') {
	resultado1 = ((72.7*altura) - 58);
	printf("O seu peso ideal eh: %.2f ", resultado1);
	}

	else if(sexo == 'F'){
    resultado2 = ((62.1*altura) - 44.7);  
	printf("O seu peso ideal eh: %.2f ", resultado2); 
	}
	
	
	getchar();
	return 0;
}
