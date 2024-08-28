#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
int matricula = 2422130019;
int idade = 19;
float altura = 1.77;
float peso = 54.43;
char sexo = 'M';

  printf("Matricula: %i\n", matricula);
  printf("Idade: %i\n", idade);
  printf("Altura: %.2f\n", altura);
  printf ("Peso: %.2f\n", peso);
  printf("Sexo: %c\n", sexo);
  return 0;
}