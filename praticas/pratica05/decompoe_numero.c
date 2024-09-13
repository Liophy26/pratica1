#include <stdio.h>

int main (){

  int numero;

  int milhares;
  int centenas;
  int dezenas;
  int unidades;

  printf ("Digite milhares: ");
  int milhar = scanf ("%i", &milhares);

  printf ("Digite centenas: ");
  int cent = scanf ("%i", &centenas);

  printf ("Digite dezenas:  ");
  int denz = scanf ("%i", &dezenas);

  printf ("Digite unidades: ");
  int uni = scanf ("%i", &unidades);

  int p_milhar = milhares * 1000;
  int p_centena = centenas * 100;
  int p_dezena = dezenas * 10;
  int p_unidade = unidades * 1;

  numero = p_milhar + p_centena + p_dezena + p_unidade;

  printf ("Numero :      %i\n", numero);

  int milhar_result = p_milhar / 1000;
  int cent_result = p_centena / 100;
  int denz_result = p_dezena / 10;
  int uni_result = p_unidade / 1;

  printf ("O número %i é decomposto em %i milhar(es), %i centena(s), %i dezena(s) e %i unidade(s).\n", numero, milhar_result, cent_result, denz_result, uni_result);

  

  
  return 0;
}