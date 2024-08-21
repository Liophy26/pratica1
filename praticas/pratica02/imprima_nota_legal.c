#include <stdio.h>
int main() {
  printf ("%s\n", "==============================");
  printf ("\t %s\n", "N O T A   L E G A L");
  printf ("%s\n", "==============================");
  printf ("%.9s %12.3s %12.10s\n", "Item","Ctd", "ValorUnit");
  printf ("%.11s %7.3i %12.2f\n", "Camiseta", 002, 39.99);
  printf ("%.11s %10.3i %12.2f\n", "Calca", 001, 89.90);
  printf ("%.11s %4.3i %12.2f\n", "Meia Social", 003, 19.99);
  printf ("%s\n", "==============================");
  printf ("%.12s %.2f\n", "total",        229.85);
  return 0;
}