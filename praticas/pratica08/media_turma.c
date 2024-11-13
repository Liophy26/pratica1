#include <stdio.h>
int main()
{

    float notas[10];
    float soma = 0;
    float media = 0;
    int qtde_acima_media = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite uma posicao de variavel: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    
    media = soma / 10;
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > media)
        {
            qtde_acima_media = qtde_acima_media + 1;
        }
    }
    printf("media: %.2f \n", media);
    printf("%i notas acima da media", qtde_acima_media);
    return 0;
}