//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

#include<stdio.h>
int main()
{
	//Fa�a um algoritmo para ler um n�mero inteiro. Verificar se o n�mero est� no intervalo entre 
	//50 (inclusive) e 100 (inclusive), se estiver, imprimir �Pertence ao intervalo�, sen�o imprimir
	//�N�o pertence ao intervalo�
	
	float numero;
		
	// Recebe o numero
	printf("Digite um numero: ");
	scanf("%f%*c",&numero);
	
	// Testar o numero se est� dentro do intervalo
	if (numero >=50 && numero <=100){
		printf("\nPertence ao intervalo");
	}else{
		printf("\nNao pertence ao intervalo");
	}
	
	getchar();
	return 0;
}
