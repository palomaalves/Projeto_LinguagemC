//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

#include<stdio.h>
int main()
{
	//Faça um algoritmo para ler um número inteiro. Verificar se o número está no intervalo entre 
	//50 (inclusive) e 100 (inclusive), se estiver, imprimir “Pertence ao intervalo”, senão imprimir
	//“Não pertence ao intervalo”
	
	float numero;
		
	// Recebe o numero
	printf("Digite um numero: ");
	scanf("%f%*c",&numero);
	
	// Testar o numero se está dentro do intervalo
	if (numero >=50 && numero <=100){
		printf("\nPertence ao intervalo");
	}else{
		printf("\nNao pertence ao intervalo");
	}
	
	getchar();
	return 0;
}
