//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz
 
#include<stdio.h>
#include<math.h>

int main(){
	/*Fa�a um algoritmo que receba um n�mero, calcule e mostre:
	� O n�mero;
	� O n�mero elevado ao quadrado;
	� O n�mero elevado ao cubo;
	� A raiz quadrada do n�mero digitado;
	� O n�mero elevado a pot�ncia 10;*/

 	float n, v1, v2, v3, v4;
	printf("Digite um numero: ");
	scanf("%f*c", &n);
	printf("\nNumero = %.2f", n);
	v1=pow(n, 2);
	v2=pow(n, 3);
	v3=sqrt(n);
	v4=pow(n, 10);
	
	printf("\nO numero elevado ao quadrado = %.2f\n", v1);
	printf("\nO numero elevado ao cubo = %.2f\n", v2);
	printf("\nA raiz quadrada do n�mero digitado = %.2f\n", v3);
	printf("\nO numero elevado a pot�ncia 10 = %.2f\n", v4);
	
	return 0;
}
