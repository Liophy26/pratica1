#include <stdio.h>

int main(){

    float valor_bruto = 0.00;
    float valor_desconto = 0.00;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_bruto);

   int menor100, maior100, menor500, maior500;
   menor100 = valor_bruto <= 100;
   maior100 = valor_bruto >= 100.01;
   menor500 = valor_bruto <= 500;
   maior500 = valor_bruto >= 500.01;
   if(menor100){
    valor_desconto = 1.00;
    printf("O desconto eh de %.2f por cento", valor_desconto);
   } else if(maior100 && menor500){
    valor_desconto = 5.00;
    printf("O desconto eh de %.2f por cento", valor_desconto); 
   } else if(maior500){
    valor_desconto = 10.00;
    printf("O desconto eh de %.2f por cento", valor_desconto);
   }
    


    return 0;
}