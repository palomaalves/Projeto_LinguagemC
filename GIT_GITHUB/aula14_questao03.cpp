

//3) Criar um algoritmo que leia os elementos de uma matriz de números
//inteiros de dimensão 4 x 4, e em seguida imprima os elementos da diagonal
//principal.

#include <iostream>

using namespace std;

int main()
{
  int mat[5][5];
  int i, j, k, soma=0;
  cin >> k;
  
  
  for(i=0; i<5; i++){
    for(int j=0; j<5;j++){
      mat[i][j] = i-j;
      
    }
  }
  for(i=0; i<5; i++){
    for(j=0; j <5; j++){
      mat[i][j]+= k;
  }
  }
  cout << mat[2][3]*mat[3][2];
  
   return 0;
}
