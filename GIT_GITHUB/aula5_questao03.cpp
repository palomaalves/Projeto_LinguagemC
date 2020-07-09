/*Equipe:
Alequissandra Rayane Farias Santos Silva
Beatriz Lira Martins
Juliete Cilene de Albuquerque Sérvio
Paloma Corrêa Alves 
Thulio Mateus de Oliveira Queiroz*/

//3 – Crie um algoritmo que leia um número de 1 a 7 e imprima o dia da semana correspondente.
//Sabendo que 1 corresponde ao Domingo.

#include <stdio.h>

int main ()
{
	int valor;
	printf ("Digite um valor de 1 a 7:\n ");
	scanf("%d", &valor);
	
	switch (valor)
	{
	
    case (1):
    	printf ("Domingo\n");
    	break;
    
	case (2):
		printf ("Segunda\n");
		break;
			
	case (3):
		printf ("Terça\n");
		break;
				
	case (4):
		printf ("Quarta\n");
		break;
				
	case (5):
		printf ("Quinta\n");
		break;
					
	case (6):
		printf ("Sexta\n");
		break;
	
	case (7):
		printf ("Sábado\n");
		break;
	default:
	printf ("Valor invalido! Digite apenas numeros de 1 a 7");
		break;
	}

return 0;
}
