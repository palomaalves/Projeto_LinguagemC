/*Grupo:
1-Paloma Corr�a Alves - 202000716
2-Beatriz Lira Martins 2020002049
3-Thulio Queiroz 202003804
4-Juliete C. de Albuquerque S�rvio 202003843
5-Alequissandra Rayane Farias Santos Silva 202000574*/

//4 � Fa�a um programa que leia um n�mero N, calcule seu fatorial e mostre na tela o valor calculado. 
//Ex.: Se o n�mero for 5 o resultado ser�: 5 x 4 x 3 x 2 x 1 = 120.

#include<stdio.h>
#include <locale.h>
 
int main() 
{

	int n,i,fatorial;
	fatorial = 1;
  
  	printf("Digite um numero: \n");
  	scanf("%d*c", &n);

  	i = n;

  	while(i>0){
    	
		if(i>1){
      		fatorial = fatorial * i;
      		printf("%d x ",i);
    	}else{
      		printf("%d = ",i);
    	}
    i--;
  	}
  
  	printf("%d\n",fatorial);

  	return 0;
}
	

