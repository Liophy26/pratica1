#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 3
#define COLUNA 4

void imprimirmatriz( double matriz[LINHA][COLUNA]);
void calculaVariaveis (double matriz[LINHA][COLUNA]) ;

int main()
{
    //solucao de sitemas lineares 3x3
   int dimensao ;
   double pivo;
   double determinante =1.0;
   double  matriz[LINHA][COLUNA];
     /*={{3,2,1,1},
            {5,3,4,2},
            {1,1,-1,1}};*/
    double variaveis[LINHA];
   //setlocale(LC_ALL, "Portuguese");
   int contador=0;//sera utilizado para determinar o sinal do determinante
   //printf("Qual a dimens�o da matriz?\n");
   //scanf("%d", &dimensao);

   // alocar matriz na memoria


     printf("Digite os elementos da matriz EXTENDIDA.\n");
     printf("Ex: Se na primeira linha estiver escrito x+2y-3z=6 \n então:\n [1,1] = 1 \n [1,2] = 2 \n [1,3] = -3\n [1,4] = 6 \n");
     printf("Digite os elementos agora da linha 1 e logo depois da linha 2 e 3, um de cada vez.\n");

       for(int i =0;i<LINHA;i++){
        for(int j =0;j<COLUNA;j++){
        printf("[%d,%d]", i+1, j+1);

        scanf("%lf", &matriz[i][j]);

     }
     }


     imprimirmatriz( matriz);
     for(int i = 0; i <COLUNA - 1; i++)
    {
        if(matriz[i][i] == 0)
        {
            for(int k = i+1; k <LINHA; k++)
            {
                if(matriz[k][i] != 0)
                {
                    for(int j = 0; j < COLUNA; j++)
                    {
                       double  temp = matriz[i][j];
                        matriz[i][j] = matriz[k][j];
                        matriz[k][j] = temp;
                    }
                    k = COLUNA;

                }
            }
            contador++;
        }else

     //   if(matriz[i][i] != 0)
        {
            for(int k = i + 1; k < LINHA; k++)
            {
                pivo  = -1.0 *matriz[k][i] /  matriz[i][i];
                for(int j = i; j < COLUNA; j++)
                {
                    matriz[k][j] = matriz[k][j] + (pivo* matriz[i][j]);
                }
            }
        }
    }
       printf("Matriz triangular superior. \n");
             imprimirmatriz(matriz);

    determinante = 1.0;
    // Calcula o determinante
    for(int i = 0; i < LINHA; i++)
        determinante *= matriz[i][i];

    printf("\nDeterminante:\n");
    if(contador % 2 == 0)
        printf("%8.3f \n", determinante);
    else{
        determinante = -1.0*determinante;
        printf("%8.3f \n",  determinante);

    }if(determinante!=0){
      calculaVariaveis(matriz);}
      else{
        printf("Sistema impossivel ou inderteminado\n");
      }
   return 0;
}

void imprimirmatriz( double matriz[LINHA][COLUNA]){

      for(int i =0;i < LINHA;i++){
            for(int j =0;j<COLUNA;j++){
            printf("%5.3lf\t", matriz[i][j]);
            }
     printf("\n");
     }
      printf("\n");
}
void calculaVariaveis (double matriz[LINHA][COLUNA]){
   double variaveis[LINHA];
     variaveis[2]=matriz[2][3]/matriz[2][2];
     variaveis[1]=(matriz[1][3]-(matriz[1][2]*variaveis[2]))/matriz[1][1];
     variaveis[0]= (matriz[0][3]-(matriz[0][1]*variaveis[1]+(matriz[0][2]*variaveis[2])))/matriz[0][0] ;
     printf("\n");
     printf(" A variavel x= %lf \n", variaveis[0]);
     printf(" A variavel y= %lf \n", variaveis[1]);
     printf(" A variavel z= %lf \n", variaveis[2]);

}

