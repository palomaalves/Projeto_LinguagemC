/*Equipe:
Alequissandra Rayane Farias Santos Silva
Beatriz Lira Martins
Juliete Cilene de Albuquerque Sérvio
Paloma Corrêa Alves 
Thulio Mateus de Oliveira Queiroz*/

//1 – Faça um algoritmo que leia um inteiro entre 1 e 12 e imprima o nome do mês por extenso.

#include <stdio.h>
#include <conio.h>

int main (void)
{
	int valor;
	printf ("Digite um valor de 1 a 12: ");
	scanf("%d", &valor);
	
	
	switch (valor)
	{
	
    case 1 :
    	printf ("Janeiro\n");
    	break;
    
	case 2 :
		printf ("Fevereiro\n");
		break;
			
	case 3 :
		printf ("Março\n");
		break;
				
	case 4 :
		printf ("Abril\n");
		break;
				
	case 5 :
		printf ("Maio\n");
		break;
					
	case 6 :
		printf ("Junho\n");
						break;
	
	case 7 :
		printf ("Julho\n");
		break;
							
	case 8 :
		printf ("Agosto\n");
		break;
								
	case 9 :
		printf ("Setembro\n");
		break;
									
	case 10 :
		printf ("Outubro\n");
		break;
									
	case 11 :
		printf ("Novembro\n");
		break;
										
	case 12 :
		printf ("Dezembro\n");
		break;
											
	default:
	printf ("Valor invalido! Digite apenas numeros de 1 a 12");
	}
											
	getch ();
	return 0;
										
}
