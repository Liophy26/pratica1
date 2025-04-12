#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void imprimirmatriz(int dimensao, double matriz[dimensao][dimensao]);


int main()
{
   int dimensao ;
   double pivo;
   double determinante =1.0;

   //setlocale(LC_ALL, "Portuguese");
   int contador=0;//sera utilizado para determinar o sinal do determinante
   printf("Qual a dimens�o da matriz?\n");
   scanf("%d", &dimensao);
   double matriz[dimensao][dimensao];
   // alocar matriz na memoria

     printf("Digite os elementos da matriz.\n");

       for(int i =0;i<dimensao;i++){
        for(int j =0;j<dimensao;j++){
        printf("[%d,%d]", i+1, j+1);

        scanf("%lf", &matriz[i][j]);

     }
     }
    printf("Matriz original:\n");
     imprimirmatriz(dimensao, matriz);


         for(int i = 0; i <dimensao - 1; i++)
    {
        if(matriz[i][i] == 0)
        {
            for(int k = i; k <dimensao; k++)
            {
                if(matriz[k][i] != 0)
                {
                    for(int j = 0; j < dimensao; j++)
                    {
                       double  temp = matriz[i][j];
                        matriz[i][j] = matriz[k][j];
                        matriz[k][j] = temp;
                    }
                    k = dimensao;
                }
            }
            contador++;
        }else

     //   if(matriz[i][i] != 0)
        {
            for(int k = i + 1; k < dimensao; k++)
            {
                pivo  = -1.0 *matriz[k][i] /  matriz[i][i];
                for(int j = i; j < dimensao; j++)
                {
                    matriz[k][j] = matriz[k][j] + (pivo* matriz[i][j]);
                }
                printf("Zerando elementos da coluna:\n");
                imprimirmatriz(dimensao,matriz);
            }

        }
    }
       printf("Matriz triangular superior. \n");
             imprimirmatriz(dimensao,matriz);

    determinante = 1.0;
    // Calcula o determinante
    for(int i = 0; i < dimensao; i++)
        determinante *= matriz[i][i];

    printf("\nDeterminante:\n");
    if(contador % 2 == 0)
        printf("%8.3f \n", determinante);
    else{
        printf("%8.3f \n", -1.0 * determinante);
} printf("Matriz triangular superior. \n");
             imprimirmatriz(dimensao,matriz);



    return 0;








     }





void imprimirmatriz(int dimensao, double matriz[dimensao][dimensao]){

      for(int i =0;i < dimensao;i++){
            for(int j =0;j<dimensao;j++){
            printf("%5.3lf ", matriz[i][j]);
            }
     printf("\n");
     }
printf("\n\n");

}


