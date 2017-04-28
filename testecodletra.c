#include <stdio.h>
#include <stdlib.h>

int main(){

  char letra, resposta;
  int status = 0;


  do {
    
  printf("\nDigite um caracter:");
  letra = getch();
    
  printf("\nLetra: %c e' igual a %d em Decimal", letra, letra);
  printf("\nLetra: %c e' igual a %d em Decimal", toupper(letra), toupper(letra));
  printf("\nLetra: %c e' igual a %d em Decimal\n", tolower(letra), tolower(letra));

  printf("\nLetra: %c e' igual a %o em Octal", letra, letra);
  printf("\nLetra: %c e' igual a %o em Octal", toupper(letra), toupper(letra));
  printf("\nLetra: %c e' igual a %o em Octal\n", tolower(letra), tolower(letra));
      
  printf("\nLetra: %c e' igual a %x em Hexadecimal", letra, letra);
  printf("\nLetra: %c e' igual a %x em Hexadecimal", toupper(letra), toupper(letra));
  printf("\nLetra: %c e' igual a %x em Hexadecimal\n", tolower(letra), tolower(letra));

  printf("\nDeseja fazer outra verificacao?(S/N)");
  resposta = getch();
     
     if(resposta == 'N' || resposta == 'n')
       {
     
           ++status;
           printf("\nObrigado, e volte sempre!\n");
     
       }
     
     }
   while(status == 0);
}