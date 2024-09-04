#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  char tecla = '\0' ; // caractere nulo

  printf ("digite uma tecla: ");
  int deu_certo = scanf ("%c", &tecla);
  printf ("Você digitou: %c\n", tecla);
  
  getchar();
  printf ("Digite outra tecla: ");
  deu_certo = scanf ("%c", &tecla);
  printf ("Você digitou: %c\n", tecla); //bufer do teclado, sempre adciona o getchar( ), quando for caracter

  getchar();
  char nome[31];
  printf ("Entre com um nome: ");
  deu_certo = scanf ("%[^\n]s", nome);
  printf ("Você digitou: %s\n", nome);
  
  return 0;
}
