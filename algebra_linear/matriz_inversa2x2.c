#include <stdio.h>
#include <stdlib.h>

int main()
{
     float determinante;
     int controle = 0;
     int escolha;
     int linha;
     int coluna;
     float matriz2[2][2];
     float matrizInversa2[2][2];
     int k = 0;
     float pivo = 0, m = 0;

for(linha = 0 ; linha<2 ;linha++){
    for(coluna =0 ; coluna <2 ; coluna++){
        printf("digite o elemento da linha [%d,%d] ", linha +1 , coluna+1);
        scanf("%f", &matriz2[linha][coluna]);

    }

}
determinante  = matriz2[0][0]*matriz2[1][1] - matriz2[0][1]*matriz2[1][0];
printf("O determiinante da matriz vale : %f \n\n", determinante);
     if(determinante ==0 ) {
        printf("\nEssa matriz nao tem inversa. \n");

     }else{
        matrizInversa2[0][0] = matriz2[1][1]/determinante;
        matrizInversa2[1][1] = matriz2[0][0]/determinante;
        matrizInversa2[0][1] = -1.0* matriz2[0][1]/determinante;
        matrizInversa2[1][0] = -1.0 * matriz2[1][0]/determinante;
        printf ("\n Matriz original :\n");
         for(linha = 0 ; linha<2 ;linha++){
          for(coluna =0 ; coluna <2 ; coluna++){
             printf("%f ", matriz2[linha][coluna]);
    }

    printf("\n");
}
         printf ("Matriz inversa :\n");
          for(linha = 0 ; linha<2 ;linha++){
            for(coluna =0 ; coluna <2 ; coluna++){
             printf("%f ", matrizInversa2[linha][coluna]);
    }

    printf("\n");
}

     }

  printf("\n");

  return 0;
}
