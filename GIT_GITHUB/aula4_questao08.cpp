//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

	/*A prefeitura de Natal abriu uma linha de cr�dito para os funcion�rios estatut�rios. O valor
	m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer um algoritmo que
	leia o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou n�o ser
	concedido.
	Exemplo:
	Sal�rio bruto: 1200,00
	Valor da presta��o: 400,00
	Empr�stimo n�o pode ser concedido!!*/
int main()
{
	float salario, prestacao, resultado;
	
	printf("Digite seu salario: ");
	scanf("%f*c",&salario);
	printf("Digite a presta�ao: ");
	scanf("%f*c",&prestacao);
	
	resultado=salario*0.3;
	
	if(prestacao<=resultado){
		printf("\nO seu emprestimo podera ser concedido!");
	}else{
		printf("\nO emprestimo nao pode ser concedido!");
	}
		
	getchar();
	return 0;
}
