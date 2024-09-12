#include <stdio.h>

int main(){

  float nota_a1;
  float nota_a2;

  printf("Digite A1: ");
  float Nota = scanf ("%f", &nota_a1);
  
  float nota01 = nota_a1 * 0.4;
  printf("Nota primeiro bimentres: %.2f\n", nota01);

  printf ("Digite A2: ");
  float Nota2 = scanf ("%f", &nota_a2);

  float nota02 = nota_a2 * 0.6;
  printf (" Nota segundo Bimestre : %.2f\n", nota02);

  float nota_final = nota01 + nota02;
  printf ("Nota fina: %.2f\n", nota_final);
  
  return 0;
}