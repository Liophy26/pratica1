#include <stdio.h>
#include <stdlib.h>
int main (){
    int numero = 10;
    int *pont;
    printf("numero %d\n", numero);
    pont = &numero;
    *pont = 5;
    printf("numero modificado %d\n", numero);
    return 0;
}