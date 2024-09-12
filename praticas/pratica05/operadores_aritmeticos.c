#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  //Entrada
  int numero1;
  int numero2;
  float numero3;
  
  printf ("Digite um número inteiro: ");
  int deu_certo = scanf ("%i", &numero1);

  getchar();
  
  printf ("Digite um número inteiro: ");
  deu_certo = scanf ("%i", &numero2);

  printf ("Entre com outro numero decimal: ");
  deu_certo = scanf ("%f", &numero3);

  //Processamento
  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int mutiplicacao = numero1 * numero2;
  float divisao = numero1 / numero2;
  int resto_divisao = numero1 % numero2;
  float fracao = numero1 / numero3;

  //Saida

  printf(" %i + %i = %i\n", numero1, numero2, soma);
  printf(" %i - %i = %i\n", numero1, numero2, subtracao);
  printf(" %i * %i = %i\n", numero1, numero2, mutiplicacao);
  printf(" %i / %i = %f\n", numero1, numero2, divisao);
  printf(" %i %% %i = %i\n", numero1, numero2, resto_divisao);
  printf(" %i / %f = %f\n", numero1, numero3, fracao);
  
return 0;
}