#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  int ISBN = 26022006;
  int Numero_de_Paginas = 367;
  float Preco_do_livro = 74.90;
  int Ano_da_publicacao = 2023;

  printf ("ISBN: %i\n", ISBN);
  printf ("Numero de Paginas: %i\n", Numero_de_Paginas);
  printf ("Preco do livro: %.2f\n", Preco_do_livro);
  printf ("Ano da publicacao: %i\n", Ano_da_publicacao);
  return 0;
}