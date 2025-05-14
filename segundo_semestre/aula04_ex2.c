#include <stdio.h>
#define clean() scanf("%*[^\n]%*c")

int main(){

    typedef unsigned long int ulint;
    unsigned long int inteiro_sem_sinal, ulint2;
    ulint int_sem_sinal;

    typedef struct pessoa Pessoa;
    struct pessoa{
        char nome[100];
        char genero; // M, F, NB
        int idade;
};
Pessoa pessoa1;
printf("Digite seu nome: ");
scanf("%s", pessoa1.nome);
//scanf("%6[^\n]%*[^\n]%*c", p.nome);
while(getchar()!='\n');
printf("Genero(M, F, NB): \n");
scanf("%c", &pessoa1.genero);
while(getchar()!='\n');
printf("Idade: \n");
scanf("%i", &pessoa1.idade);
//scanf("%d*[^\n]%*c", &p.idade);
while(getchar()!='\n');
    return 0;
}