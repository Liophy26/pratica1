#include <stdio.h>
#include <stdlib.h>

int main(){
    int  *pint = malloc(4);
    *pint = 5;
    short int *psint = malloc(4);
    psint[1] = 7;
    psint[0] = 3;

    printf("pint :%p, pint:%p\n", pint, *pint);
    printf("psint[0] :%p, psint[0]:%p\n", psint[0], *psint[0]);
    printf("psint[1] :%p, psint[1]:%p\n", psint[1], *psint[1]);

    // libera memoria
    free(pint);
    free(psint);
    return 0;
}