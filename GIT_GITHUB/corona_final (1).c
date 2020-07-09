//Equipe:
//Alequissandra Rayane Farias Santos Silva
//Beatriz Lira Martins
//Juliete Cilene de Albuquerque Sérvio
//Paloma Corrêa Alves 
//Thulio Mateus de Oliveira Queiroz

//Pesquisa: https://www.health.nsw.gov.au/Infectious/diseases/Pages/2019-ncov-case-definition.aspx
// Critério epidemiológico (realizou uma viagem internacional ou teve contato próximo com uma pessoa infectada )
// E Critério Clínico (teve febre (temperatura maior que 37.5C) ou infecção respiratória aguda)

#include <stdio.h>
#include <locale.h>

int main() {
  
  //Configura a exibição de caracteres especiais para o português
  setlocale(LC_ALL,"Portuguese");
  
  //Declaração de variáveis
  char nome[20];
  int resposta;
  
  //Pergunta o nome do(a) usuário(a)
  printf("Qual o seu nome? ");
  scanf("%s%*c",*&nome);
  printf("\nOlá %s!\n\n",nome);

  //Verificação do critério epidemiológico
  printf("Você realizou uma viagem internacional ou teve contato próximo com uma pessoa infectada com COVID-19?");
  printf("\n\nDigite 1 para SIM ou 2 para NÃO: ");
  scanf("%d%*c",&resposta);

  if(resposta==1){

    //Verificação do critério clínico
    printf("\n\nVocê teve febre (temperatura maior que 37.5C) ou infecção respiratória aguda (tosse, falta de ar ou dor de garganta) com ou sem febre? ");
    printf("\n\nDigite 1 para SIM ou 2 para NÃO: ");
    scanf("%d%*c",&resposta);

    //Exibe mensagem para o usuário
    if(resposta==1){
      printf("\nCaso suspeito! Procure a unidade de saúde mais próxima.");
    }else{
      printf("\nSeus sintomas não correspondem a um caso suspeito de infecção por COVID-19. ");
      }
	}
  else{

    if(resposta==2){
      printf("\nSeu perfil não corresponde a um caso suspeito de infecção por COVID-19. ");
    }

  }

  printf("\n\n[FIM DO PROGRAMA]");
  
  getchar();
  return 0;
}
