#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  long int populacao_mundial = 7800000000L;
  printf("Populacao Mundial: %li\n", populacao_mundial);
  const short HORA_EM_SEGUNDOS = 3600;
  printf ("1 hora tem a %i segundos.\n", HORA_EM_SEGUNDOS);
  long double precisao_extrema = 3.14159265358979323846L;
  printf ("Precisao extrema: %.20Lf\n", precisao_extrema);
  return 0;
}