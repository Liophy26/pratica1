#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  float nota = 0.0f;

  printf ("Entre com uma nota entre 0 e 10:");
  int deu_certo = scanf ("%f", &nota);

  printf ("Você digitou: %f\n", nota);

  double pi = 0.0;
  printf ("Entre com um valor de pi com ate 10 casas: ");
  deu_certo = scanf ("%lf", &pi);

  printf ("Voce digitou: %.10f\n", pi);
  
  return 0;
}