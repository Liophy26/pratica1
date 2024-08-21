#include <stdio.h>
int main() {
  // numeros inteiros
  printf("%i\n", 1234);
  printf("%i\n", 123);
  printf("%i\n", 56789);
  printf("%i %i\n", 26, 02);

  // numeros decimais
  printf("%f\n", 3.141592);
  printf("%.2f\n", 3.1415);
  printf("%.9f\n", 3.141592);

  //valores
  printf("RS %6.2f\n", 297.85);
  return 0;
}