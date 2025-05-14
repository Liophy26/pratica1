#include <stdio.h>

int funcao(){
    int n1 = 15;
    return 10;
}
int n1 = 3; // valor global

int main ()
{
    printf("Valor de n1: %d\n", n1); 
    int n1 = 5;  // valor locarl
    printf("Valor de n1: %d\n", n1);
    {
        int n1 =7; // valor locarl
        printf("valor de n1:%d\n", n1);
    }
    /*printf("Hello woirld\n");
    int resusltado = funcao1();
    printf("valor de retorn da funcao1: %d\n", resultado);*/
    
    return 0;
}