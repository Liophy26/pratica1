#include <stdio.h>
#include <stdlib.h>

int main()
{
     float determinante;
     int controle = 0;
     int escolha;
     int linha;
     int coluna;
     float matriz3[3][3];
      float matrizIdentidade3[3][3];
     int k = 0;
     float pivo = 0, m = 0;

     for(linha = 0 ; linha<3 ;linha++){
        for(coluna =0 ; coluna <3 ; coluna++){
            printf("digite o elemento[%d,%d] ", linha +1 , coluna+1);
            scanf("%f", &matriz3[linha][coluna]);

        }

    }
        printf("A matriz digitada foi.\n");
        for(linha = 0; linha < 3; linha++){
for(coluna = 0; coluna < 3; coluna++){
printf("%lf ", matriz3[linha][coluna]);
}

printf("\n");
}

for(linha = 0; linha < 3; linha++){
    for(coluna = 0; coluna < 3; coluna++){
        if(linha == coluna){
         matrizIdentidade3[linha][coluna] = 1;
            }else{
            matrizIdentidade3[linha][coluna] = 0;
            }
    }
}

for(coluna = 0; coluna < 3; coluna++){
pivo = matriz3[coluna][coluna];
    for(k = 0; k < 3; k++){
    matriz3[coluna][k] = (matriz3[coluna][k])/(pivo);
    matrizIdentidade3[coluna][k] = (matrizIdentidade3[coluna][k])/(pivo);
    }

for(linha = 0; linha < 3; linha++){
    if(linha != coluna){
        m = matriz3[linha][coluna];
                   for(k = 0; k < 3; k++){
        matriz3[linha][k] = (matriz3[linha][k]) - (m*matriz3[coluna][k]);
        matrizIdentidade3[linha][k] = (matrizIdentidade3[linha][k]) - (m*matrizIdentidade3[coluna][k]);
            }
        }
    }
}
printf(" Matriz inversa. \n");
for(linha = 0; linha < 3; linha++){
for(coluna = 0; coluna < 3; coluna++){
printf("%lf ", matrizIdentidade3[linha][coluna]);
    }

 printf("\n");
}
return 0;
}