#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// O usuário precisa adivinhar o número que o computador gerou.

void bem_vindo();
void boneco(int numR, int tentativa);

int main()
{
  int numR, resp=-1, tentativa=1;

  srand(time(NULL));

  bem_vindo();
  numR=rand()%100;
  printf("\n\nPronto! Ja escolhi um numero.\nTente adivinhar!!");

  do{
      do{
          printf("\nDigite um numero: ");
          scanf("%d", &resp);
      }while(resp<0 || resp>99);

      if(resp<numR)
        {
          tentativa++;
          printf("\n\nERROU!! O numero e' maior!\n\n");
        }
      else
        if(resp>numR)
          {
            tentativa++;
            printf("\n\nERROU!! O numero e' menor!\n\n");
          } 
        else
          {
            printf("\n\nParabens!!! Voce acertou.\nO numero e' igual a:");      
            break;
          }
  }while(resp!=numR);

  boneco(numR, tentativa);

}

///////////////////////////////////////////////////////////////////////////////////////////////////

void bem_vindo()
{
  printf("\n\nOla, seja bem vindo!");
  printf("\n\nNeste programa voce tentara adivinhar qual o numero que o computador escolheu");
  printf("\n\nEle lhe dara dicas dizendo se o numero que o PC escolheu e' maior ou menor");
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void boneco(int numR, int tentativa)
{
  printf("\n\n\n\n");

  printf("(._.)\n");
  printf("<) )-  %d\n", numR);
  printf(" / \\");  

  printf("\n\n\n");

  printf("       %d Tentativas\n", tentativa);
  printf("(._.)/  \n");
  printf("<) )\n");
  printf(" / \\");
 
  printf("\n\n\n\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////

