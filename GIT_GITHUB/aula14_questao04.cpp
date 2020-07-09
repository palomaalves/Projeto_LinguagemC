
//4) Criar um algoritmo que preencha um vetor com os números 10 a 20, e
//depois mostrar os elementos pares do vetor de trás para frente.

#include <iostream>

using namespace std;

int main()
{
	int vetor[11], valor=10;
	
	for(int i=0; i<11; i++)
	{
	    vetor[i]=valor;
	    valor++;
	    cout<<vetor[i]<<"\t";
	}
	
	for(int i = 10; i >=0; i--)
	{
	 if(vetor[i] % 2 == 0){
	 	cout<<vetor[i]<<"\t";
	 }
	 
	}
	    
	
	return 0;
}
