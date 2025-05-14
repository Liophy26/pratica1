#include <stdio.h>

int main(){

    int v[10] = {3,5,6,2,8,9,1,5,8,7};
    printf(" Valores\n");
    printf("v[0]= %d, *(v+0) = %d\n", v[0], *v);
    printf("v[1]= %d, *(v+1) = %d\n", v[1], *v+1);
    printf("v[2]= %d, *(v+2) = %d\n", v[2], *v+2);
    printf("Enderecos\n");
    printf("v[0]= %p, v+0 = %p\n", &v[0], v+0);
    printf("v[1]= %p, v+1 = %p\n", &v[1], v+1);
    printf("v[2]= %p, v+2 = %p\n", &v[2], v+2);

    int *p = v; // p = &v[0]

    printf("Valores\n");
    printf("p[0] = %d, v + 0 = %d\n", p[0], *(p+0));
    printf("p[1] = %d, v + 1 = %d\n", p[1], *(p+1));
    printf("p[2] = %d, v + 2 = %d\n", p[2], *(p+2));
    printf("Endereço\n");
    printf("p[0]= %p, p+0 = %p\n", &p[0], (p+0));
    printf("p[1]= %p, p+1 = %p\n", &p[1], (p+1));
    printf("p[2]= %p, p+2 = %p\n", &p[2], (p+2));

    int *p = v+4; //&v[4]

    printf("Valores\n");
    printf("p[1] = %d, v - 2 = %d\n", p[-2], *(p-2));
    printf("p[2] = %d, v - 1 = %d\n", p[-1], *(p-1));
    printf("p[0] = %d, v - 0 = %d\n", p[2], *(p-0));
    printf("p[1] = %d, v + 1 = %d\n", p[1], *(p+1));
    printf("p[2] = %d, v + 2 = %d\n", p[2], *(p+2));
    printf("Endereço\n");
    printf("p[-2]= %p, p-2 = %p\n", &p[-2], p-2);
    printf("p[-1]= %p, p-1 = %p\n", &p[-1], p-1);
    printf("p[0]= %p, p-0 = %p\n", &p[0], p-0);
    printf("p[1]= %p, p+1 = %p\n", &p[1], p+1);
    printf("p[2]= %p, p+2 = %p\n", &p[2], p+2);


    return 0;
}