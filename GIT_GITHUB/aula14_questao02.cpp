
//2) Crie um programa que receba um nome, em seguida informe o número
//de vogais existentes, o número de caracteres, bem como calcular e
//apresentar a porcentagem de vogais.


#include<stdio.h>
#include <string.h>

int main() 
{
	char name[30];
	float percent;
	float tam, vogais=0;

	printf("Digite um nome: ");
	gets(name);
	
	tam= strlen(name);
	
	for(int i=0; i<tam; i++)
	{
     if(name[i]=='a' || name[i]=='e' || name[i]=='i' ||
        name[i]=='o' || name[i]=='u' || name[i]=='A' ||
        name[i]=='E' || name[i]=='I' || name[i]=='O' ||
        name[i]=='U')
        {
            vogais++;
        }
  	}
  	
	printf("Numero de Vogais: %.1f" , vogais);
 	percent= ((vogais/tam) * 100);
	printf("\nPercentual de Vogais: %4.2f", percent);
	
	return 0;
}	
	
