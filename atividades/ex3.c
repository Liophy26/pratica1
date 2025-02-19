#include <stdio.h>

int main (void){
    int n1 = 3, n2 = 5;
    int *p;
    int *pont;
    p = &n1;
    pont = &n2;
    *p = 5;
    *pont = 3;
    printf("n1: %d, n2: %d\n", n1, n2);
    return 0;
}