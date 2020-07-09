/*Equipe:
Alequissandra Rayane Farias Santos Silva
Beatriz Lira Martins
Juliete Cilene de Albuquerque Sérvio
Paloma Corrêa Alves 
Thulio Mateus de Oliveira Queiroz*/

/*                        AULA 06 – PRÁTICA COM ESTRUTURAS CONDICIONAIS
AULA 06 – PRÁTICA COM ESTRUTURAS CONDICIONAIS
Data: 02/04/2020
IDE: Dev C++
Objetivo: Implementar soluções para problemas utilizando estruturas condicionais.

Lista de Exercícios:
1) Faça um programa que recebe:
O código do estado de origem da carga de um caminhão, supondo que a digitação do código do estado seja sempre válida, isto é, um
número inteiro entre 1 e 5;
O peso da carga do caminhão em toneladas;
O código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro entre 10 e 40.

Calcule e mostre:
-O peso da carga do caminhão convertido em quilos;
-O preço da carga do caminhão;
-O valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem;
-O valor total transportado pelo caminhão, preço da carga mais imposto.

Código da carga
Preço por quilo
10 a 20 - 100
21 a 30 - 250
31 a 40 - 340

Código do estado Imposto
1 - 35%
2 - 25%
3 - 15%
4 - 5%
5 - Isento*/

#include <stdio.h>
int main()
{
	int codigo_estado, peso, codigo_carga, pesokg, resultado, imposto, valor_total;
	printf("Digite um numero inteiro de 1 a 5 que corresponde ao Codigo do Estado de Origem da carga de um caminhao: ");
	scanf("%d*c",&codigo_estado);
	printf("Digite o PESO do caminhao em toneladas: ");
	scanf("%d*c",&peso);
	printf("Digite o Codigo da Carga do caminhao que eh um numero inteiro entre 10 e 40: ");
	scanf("%d*c",&codigo_carga);		
	
	
	//O peso da carga do caminhão convertido em quilos;
	pesokg = (peso*1000);
	printf("\n O peso da carga do camihao em kg eh %d \n",pesokg);
	
	//O preço da carga do caminhão;
	if((codigo_carga>=10) && (codigo_carga<=20)) {
	resultado = (pesokg*100);
	printf("\nO preco da carga do caminhão eh R$ %d \n ", resultado);
	}

	else if((codigo_carga>=21) && (codigo_carga<=30)) {
	resultado = (pesokg*250);
	printf("\nO preco da carga do caminhao eh R$ %d \n ", resultado);
	}
	
	else if((codigo_carga>=31) && (codigo_carga<=40)) {
	resultado = (pesokg*340);
	printf("\nO preco da carga do caminhao eh R$ %d \n", resultado);
	}
		
	//O valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem;	
	
	switch (codigo_estado){
		case(1):	
			imposto = resultado*0.35;
			printf("\nO valor do imposto eh R$ %d \n",imposto);
			break;
		case(2):	
			imposto = resultado*0.25;
			printf("\nO valor do impostoeh R$ %d \n",imposto);
			break;
		case(3):	
			imposto = resultado*0.15;
			printf("\nO valor do impostoeh R$ %d \n",imposto);
			break;
		case(4):	
			imposto = resultado*0.5;
			printf("\nO valor do imposto eh R$ %d \n",imposto);
			break;
		case(5):
			imposto= resultado*0;
			printf("\nO valor do imposto eh R$ %d \n", imposto);
			break;
	break;
	}
		
			
	//O valor total transportado pelo caminhão, preço da carga mais imposto.	
	valor_total= resultado + imposto;			
	printf("\nO valor total transportado pelo caminhao eh R$ %d \n", valor_total);	
		
	return 0;
}
