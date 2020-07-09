/*Equipe:
Alequissandra Rayane Farias Santos Silva
Beatriz Lira Martins
Juliete Cilene de Albuquerque Sérvio
Paloma Corrêa Alves 
Thulio Mateus de Oliveira Queiroz*/

/*Construa um algoritmo que seja capaz de concluir qual dentre os seguintes animais foi escolhido, através de perguntas e respostas. 
Animais possíveis: leão, cavalo, homem, macaco morcego, baleia, avestruz, pinguim, pato, águia, tartaruga, crocodilo e cobra.
Exemplo: É um mamífero? Sim.
É quadrúpede? Sim.
É carnívoro? Não.
É herbívoro? Sim.
Então o animal escolhido foi o cavalo.*/

#include <stdio.h>
int main()
{

	int resposta;
	printf("Digite um numero para escolher \n");
	printf("(1) MAMIFEROS \n");
	printf("(2) AVES \n");
	printf("(3) REPTEIS \n");
	scanf("%d*c",&resposta);
	
	switch(resposta){
		case 1:
			printf("Digite (1) QUADRUPEDE \n");
			printf("Digite (2) BIPEDE \n");
			printf("Digite (3) VOADORES \n");	
			printf("Digite (4) AQUATICOS \n");
			scanf("%d*c",&resposta);
			
			switch(resposta){
				case 1:
				printf("Digite (1) CARNIVORO \n");
				printf("Digite (2) HERBIVORO \n");
				scanf("%d*c",&resposta);
				if(resposta==1){
				printf("LEAO \n");
				}
				else if(resposta==2){
				printf("CAVALO \n");
				}
				else{
				printf("OPCAO INVALIDA");
				}
				break;
				
				case 2:
				printf("(1) ONIVORO \n");
				printf("(2) FRUTIVORO \n");
				scanf("%d*c",&resposta);
				if(resposta==1){
				printf("HOMEM \n");
				}
				else if(resposta==2){
				printf("MACACO \n");
				}
				else{
				printf("OPCAO INVALIDA");
				}
				break;
				
				case 3:
				printf("MORCEGO \n");
				break;
				
				case 4:
				printf("BALEIA\n");
				break;
				
		}
		break;
		case 2:
			printf("(1) NAO-VOADORA \n");
			printf("(2) NADADORAS \n");
			printf("(3) DE RAPINA \n");
			scanf("%d*c",&resposta);
			
			switch(resposta){
				case 1:
				printf("(1) TROPICAL\n");
				printf("(2) POPULAR \n");
				scanf("%d*c",&resposta);
				if(resposta==1){
				printf("AVESTRUZ \n");
				}
				else if(resposta==2){
				printf("PINGUIM \n");
				}
				break;	
					
				case 2:
				printf("PATO");
				break;
				
				case 3:
				printf("AGUIA");
				break;
			}
		break;
		case 3:
			printf("(1) COM CASCO \n");
			printf("(2) CARNIVORO \n");
			printf("(3) SEM PATAS \n");
			scanf("%d*c",&resposta);
			
			switch(resposta){
				case 1:
				printf("TARTARUGA \n");
				break;
				
				case 2:
				printf("CROCODILO \n");
				break;
				
				case 3:
				printf("COBRA \n");
				break;
			}
		
		break;
	}
	return 0;
}
