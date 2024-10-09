#include <stdio.h>

int main (){

    int dia = 0;

    printf("Qual o dia da semana: ");
    scanf ("%i", &dia);

    switch(dia){
        case 1: printf("Eh domingo"); break;
        case 2: printf("Eh segunda-feira"); break;
        case 3: printf("Eh terca-feira"); break;
        case 4: printf("Eh quarta-feira"); break;
        case 5: printf("Eh quinta-feira"); break;
        case 6: printf("Eh sexta-feira"); break;
        case 7: printf("Eh sabado"); break;
        default: printf("So existem sete dias da semana sua anta!");
    }

    return 0;
}