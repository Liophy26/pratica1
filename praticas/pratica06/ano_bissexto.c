#include <stdio.h>

int main(){

    int ano = 0;
    printf("Digite o ano: ");
    scanf("%i", &ano);

    int eh_bissexto = ano %4 == 0;
    int nao_bissexto = ano %100 == 0;
    int eh_400 = ano %400 == 0;

    if(eh_400){
        printf("O ano %i eh bissexto\n", ano);
    } else if (nao_bissexto) {
        printf("O ano %i nao eh bissexto\n", ano);
    } else if (eh_bissexto) {
        printf("O ano %i eh bissexto", ano);
    } else {
        printf("O ano %i nao eh bissexto", ano);
    }

    return 0;
}