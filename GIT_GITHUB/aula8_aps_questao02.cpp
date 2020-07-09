//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>

	/*Faça um programa para ler um número real e exibir uma tabela em que o número
	apareça miltiplicado até 200, sendo 10 em cada linha. Esta tabela é útil para deixar 
	afixada em lojas de Xerox. Exemplo: Valor do Xerox: R$ 0.06
	1=R$ 0.06    2=R$ 0.12   ...   200= R$ 12.00*/
	
int main()
{
	int linha, coluna, posicao ;
	float numero, resultado;
	
	printf("Digite um numero: ");
	scanf("%f*c",&numero);
	
	posicao=1;	
	
	for(linha=1; linha<=20; linha++){
		
		for(coluna=1; coluna<=10; coluna++){
		
			resultado=(posicao*numero);
			printf("  %d = R$%.2f", posicao, resultado);
			posicao++;
		}
	printf("\n");
	
	}
				
	return 0;
}
