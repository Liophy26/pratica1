#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  double calculaDeterminante(double matriz[2][2]);
  double calculaTraco(double matriz[2][2]);
  void calculaAutovalor(double matriz[2][2]);



int main()
{
    double matriz[2][2];

           for (int i =0 ; i<2;i++){
             for (int j =0 ; j<2;j++){
                    printf(" digite o elemento[%i] [%i} da matriz. \n" ,i,j );
                scanf("%lf", &matriz[i][j]);
             }
        }
  /* double matriz[2][2]= {{2,1},
                    {1,2}
                    };*/

         calculaAutovalor(matriz);


        return 0;
}

 double calculaDeterminante(double matriz[2][2]){
   return matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
 }
 double calculaTraco(double matriz[2][2]){
 return matriz[0][0]+ matriz[1][1];
 }

   void calculaAutovalor(double matriz[2][2]){
       double autovalor1;
       double autovalor2;
       double lambda;

      double traco = calculaTraco(matriz);
      double determinante = calculaDeterminante(matriz);
      double delta = pow(traco,2) -4*determinante;
      if (delta <0){
        printf("Não ha auto valor real");

      }else{
        autovalor1 = (traco + sqrt(delta))/2.0;
        autovalor2 = (traco - sqrt(delta))/2.0;
         printf("autovalor1: %f \n",autovalor1);
         printf("autovalor2: %f \n",autovalor2);

      for (int i = 0; i < 2; i++) {
  //      double lambda = (i == 0) ? *autovalor1 : *autovalor2;
  if (i == 0) {
    lambda = autovalor1;
} else {
    lambda = autovalor2;
}

        // Sistema: (A - λI)v = 0
        double m[2][2] = {
            {matriz[0][0] - lambda,matriz[0][1]},
            {matriz[1][0], matriz[1][1] - lambda}
        };


        // Tentar obter um vetor não-nulo (x, y) tal que m * [x y]^T = 0
        // Vamos assumir x = 1 e resolver para y
        double x = 1.0;
        double y;

        if (fabs(m[0][1]) > 1e-6) {
            y = -m[0][0] / m[0][1];
        } else if (fabs(m[1][1]) > 1e-6) {
            y = -m[1][0] / m[1][1];
        } else {
            y = 0;
        }
         printf("auto vetor para lambda = %f.\n", lambda);
         printf("O auto vetor é a matriz transposta da matriz abaixo.\n");
         printf("v%d = [%.4f, %.4f]^T\n", i + 1, x, y);
    }
      }
}

