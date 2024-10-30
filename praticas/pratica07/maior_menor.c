#include <stdio.h>

int main (){

    int numero = 0;
    int menor = 0;
    int maior = 0;
    
   printf("Digite um numero: ");
   scanf("%i", &maior);
   printf("Digite um segundo numero: ");
   scanf("%i", &menor);
   printf("Digite 1 caso queira continuar \n");
   printf("Digite 0 caso queira encerra o programa \n");
   scanf("%i", &numero);

   while(numero == 1){

   printf("Digite um numero: ");
   scanf("%i", &maior);
   printf("Digite um segundo numero: ");
   scanf("%i", &menor);
   printf("Digite 1 caso queira continuar \n");
   printf("Digite 0 caso queira encerra o programa \n");
   scanf("%i", &numero);
    }if(maior > menor){
    printf("O numero %i eh maior que %i\n", maior, menor);
   } if(maior < menor){
    printf("O numero %i eh maior que %i\n", menor, maior);
   } else{
    printf("Os numeros sao iguais");
   }
   

    return 0;
}