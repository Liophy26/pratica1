#include <stdio.h>

int main (void){
    int i =5;
    int *p;
    p = &i;
    printf("&p:%p\n", &p);
    printf("p (&i - endereço de i): %p\n", p);
    printf("*p (i - valor de i):%d\n", *p);
    printf("Digite um valor para o ponteiro 'p':\n");
    scanf("%d", p);
    printf("&p:%p\n", &p);
    printf("p (&i - endereço de i): %p\n", p);
    printf("*p (i - valor de i):%d\n", *p);
    return 0;
}