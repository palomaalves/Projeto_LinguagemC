//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque S�rvio
//Paloma Corr�a Alves 
//Thulio Mateus de Oliveira Queiroz

//Pesquisa: https://www.health.nsw.gov.au/Infectious/diseases/Pages/2019-ncov-case-definition.aspx
// Crit�rio epidemiol�gico (realizou uma viagem internacional ou teve contato pr�ximo com uma pessoa infectada )
// E Crit�rio Cl�nico (teve febre (temperatura maior que 37.5C) ou infec��o respirat�ria aguda)

#include <stdio.h>
#include <locale.h>

int main() {
  
  //Configura a exibi��o de caracteres especiais para o portugu�s
  setlocale(LC_ALL,"Portuguese");
  
  //Declara��o de vari�veis
  char nome[20];
  int resposta;
  
  //Pergunta o nome do(a) usu�rio(a)
  printf("Qual o seu nome? ");
  scanf("%s%*c",*&nome);
  printf("\nOl� %s!\n\n",nome);

  //Verifica��o do crit�rio epidemiol�gico
  printf("Voc� realizou uma viagem internacional ou teve contato pr�ximo com uma pessoa infectada com COVID-19?");
  printf("\n\nDigite 1 para SIM ou 2 para N�O: ");
  scanf("%d%*c",&resposta);

  if(resposta==1){

    //Verifica��o do crit�rio cl�nico
    printf("\n\nVoc� teve febre (temperatura maior que 37.5C) ou infec��o respirat�ria aguda (tosse, falta de ar ou dor de garganta) com ou sem febre? ");
    printf("\n\nDigite 1 para SIM ou 2 para N�O: ");
    scanf("%d%*c",&resposta);

    //Exibe mensagem para o usu�rio
    if(resposta==1){
      printf("\nCaso suspeito! Procure a unidade de sa�de mais pr�xima.");
    }else{
      printf("\nSeus sintomas n�o correspondem a um caso suspeito de infec��o por COVID-19. ");
      }
	}
  else{

    if(resposta==2){
      printf("\nSeu perfil n�o corresponde a um caso suspeito de infec��o por COVID-19. ");
    }

  }

  printf("\n\n[FIM DO PROGRAMA]");
  
  getchar();
  return 0;
}
