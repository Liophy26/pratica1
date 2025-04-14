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
     float matriz3[3][3];
      float matrizIdentidade3[3][3];
     int k = 0;
     float pivo = 0, m = 0;

    do{
           printf("Digite 1 para calcular a inversa de uma matriz 2x2. \n");
           printf("Digite 2 para calcular a inversa de uma matriz 3x3. \n");
            printf("Digite 3 para sair do programa.\n");
          scanf("%d",&escolha);

          switch(escolha){

           case 1:
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

            break;

         case 2:

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






            break;
         case 3:
            printf("Programa encerrado");
            controle =1;
          break;
         default:
            printf("Voce fez uma escolha nao habilitada. \n");

          }


    }while(controle == 0);



         return 0;
}