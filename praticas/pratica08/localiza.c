#include <stdio.h>

int main()
{

    int numeros[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a posicao %i da variavel numeros: ", i+1);
        scanf("%i", &numeros[i]);
    }
    int numero = 0;
    printf("Digite o valor da variavel numero: ");
    scanf("%i", &numero);
    int achou = -1;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numero)
        {
            achou = i;
        }
    }
    if (achou < 0)
    {
        printf("O numero nao foi encontrado!");
    }
    else
    {
        printf("O numero foi encontrado na posicao %i", achou);
    }

    return 0;
}