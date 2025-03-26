#include<stdio.h>

int main(){
    
int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
int *p = vet; // p = &vet[0];
printf("Representação de vetor: \n");
printf("&p[0]: %p, p[0]: %d\n", &p[0], p[0]);
printf("&p[1]: %p, p[1]: %d\n", &p[1], p[1]);
printf("&p[2]: %p, p[2]: %d\n", &p[2], p[2]);
printf("Representação de ponteiro:\n");
printf("p: %p, *p: %d\n", p, *p); // vet[0]
printf("p+1: %p, *(p+1): %d\n", p+1, *(p+1)); // vet[1]
printf("p+2: %p, *(p+2): %d\n", p+2, *(p+2)); // vet[2]

int *p2 = &vet[5];
printf("Representação de vetor: \n");
printf("&p2[0]: %p, p2[0]: %d\n", &p2[0], p2[0]);
printf("&p2[1]: %p, p2[1]: %d\n", &p2[1], p2[1]);
printf("&p2[2]: %p, p2[2]: %d\n", &p2[2], p2[2]);
printf("Representação de ponteiro:\n");
printf("p2: %p, *p: %d\n", p2, *p2);
printf("p2+1: %p, *(p2+1): %d\n", p2+1, *(p2+1));
printf("p2+2: %p, *(p2+2): %d\n", p2+2, *(p2+2));

return0;
}