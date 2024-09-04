#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (){
  int qtd = 002;
  float valor = 39.99;
  printf ("==============================\n");
  printf ("\t %s\n", "   P E D I D O");
  printf ("==============================\n");
  printf ("Produto        Qtd Valor Unit\n");
  printf ("Camiseta       %03i      %5.2f\n", qtd, valor);
  
  
  return 0;
}