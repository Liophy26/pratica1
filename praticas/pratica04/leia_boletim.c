#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  long int matricula = 2422130019;
  float a1 = 8.5;
  float a2 = 5.0;
  float media = 6.4;
  printf ("Matricula\t A1\t A2\t Media\n ");
  printf ("%li %3.1f %2.1f %4.1f\n", matricula, a1, a2, media);
  
   return 0;;
}