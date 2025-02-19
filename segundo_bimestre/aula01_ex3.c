#include <stdio.h>

int main (){
    int x=5;
    float pi = 3.14;

    // declara ponteiro 
    int *p1;
    // atribui valor ao ponteiro
    p1 = &x;
    // carga inicial do ponteiro na declaração
    //float *p2 = &pi;
    float *p2 = NULL;
    //  float *p2 = NULL ou  float *p2 = 0 ou  float *p2 = ((void*)0)
    //p1 = (void *)5;
    printf("p1: %p (&x), &p1: %p\n", p1, &p1);
    printf("x: %d, &x: %p\n", x, &x);
    printf("*p1: %d, p1:%p (&x)\n", *p1, p1);
    *p1 = 9;
    
    return 0;
}