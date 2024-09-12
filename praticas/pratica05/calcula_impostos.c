#include <stdio.h>

int main(){

  float ICMS = 0.17;
  float COFINS = 0.076;
  float PIS_PASEP = 0.165;
  float preco_inicial;
  

  float imposto = scanf("%f", &preco_inicial);
  printf ("Preço inicial   : R$ %.2f\n", preco_inicial);

  float valor_icms = ICMS * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pasep = PIS_PASEP * preco_inicial;
  
  printf ("Valor ICMS      : R$ %.2f\n",valor_icms);
  printf ("Valor COFINS    : R$ %.2f\n", valor_cofins);
  printf ("Valor PIS_PASEP : R$ %.2f\n", valor_pasep);

  
  return 0;
}