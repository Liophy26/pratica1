#include <stdio.h>
#include <math.h>

int main(){

    int operacao = 0;
    printf("1- soma\n");
    printf("2- subtracao\n");
    printf("3- multiplicao\n");
    printf("4- divisao\n");
    printf("Escolha operacao: ");
    scanf("%i", &operacao);
    float numero1 = 0;
    float numero2 = 0;

    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);

    if (operacao == 1){
        float resultado = numero1 + numero2;
        printf("A soma e igual a: %.2f", resultado);
    } else if(operacao == 2){
         float resultado = numero1 - numero2;
        printf("A subtracao e igual a: %.2f", resultado);
    } else if(operacao == 3){
         float resultado = numero1 * numero2;
        printf("A multiplicacao e igual a: %.2f", resultado);
    } else if(operacao == 4){
         float resultado = numero1 / numero2;
        printf("A divisao e igual a: %.2f", resultado);
    } else {
        printf("Operacao nao encontrada");
    }

    return 0;
}

