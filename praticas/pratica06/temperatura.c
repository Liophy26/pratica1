#include <stdio.h>

int main(){

    int temperatura = 0;

    printf("Digite a temeperatura: ");
    scanf("%i", &temperatura);


   if (temperatura > 40){
    printf("Esta muito quente");
   } else if(30 <= temperatura && temperatura < 40 ){
    printf ("Esta quente");
   } else if(20 <= temperatura && temperatura < 30 ){
    printf(" Esta agradavel");
   } else {
    printf ("Esta frio ");
   }

    return 0;
}