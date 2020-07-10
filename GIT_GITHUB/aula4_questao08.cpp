#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

	/*A prefeitura de Natal abriu uma linha de crédito para os funcionários estatutários. O valor
	máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que
	leia o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser
	concedido.
	Exemplo:
	Salário bruto: 1200,00
	Valor da prestação: 400,00
	Empréstimo não pode ser concedido!!*/
int main()
{
	float salario, prestacao, resultado;
	
	printf("Digite seu salario: ");
	scanf("%f*c",&salario);
	printf("Digite a prestaçao: ");
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
