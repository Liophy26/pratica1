#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
struct aluno_t{
    long int matricula;
    float nota1;
    float nota2;
    char nome[30];

};

int check=0;
int ano[15];
int semestre[15];
int curso[15];
int escolhacurso;
float media[15];
int menu = 0;
int contador = 0;
struct aluno_t alunos[15];
 setlocale(LC_ALL,"Portuguese");




      do{
      printf("Menu de opcoes\n");
      printf("1 - Cadastro de aluno e lancamento de notas\n");
      printf("2 - Imprimiralunos cadastrados\n");
      printf("3 - Documentacao do programa\n");
      printf("4 - Encerramento do programa\n");
      printf("\n Digite a opcao desejada ");
      scanf("%i", &menu);
      printf("%i\n", menu);



        switch(menu){
        case 1:
        printf("Digite os dois ultimos numeros do ano de registro: ");
        scanf("%i", &ano[contador]);

        if(0<=ano[contador] && ano[contador]<100){

        printf("Digite o semestre em que o aluno foi matriculado: ");
        scanf("%i", &semestre[contador]);

        if(1<=semestre[contador] && semestre[contador]<=2){

        printf("Cursos cadastrados: \n");
        printf("1 - Ciencia da computacao;\n");
        printf("2 - Engenharia de computacao; \n");
        printf("3 - Gastronomia; \n");
        printf("4 - Moda; \n");
        printf("5 - Analise e desenvolvimento de sistemas; \n");
        printf("6 - Cinema\n");
        printf("Digite o numero do curso do aluno: \n");
        scanf("%i", &escolhacurso);

        switch(escolhacurso){
    case 1:
        curso[escolhacurso]= 213;
         break;
    case 2:
        curso[escolhacurso]= 225;
         break;
    case 3:
        curso[escolhacurso]= 314;
        break;
    case 4:
        curso[escolhacurso]= 501;
        break;
    case 5:
        curso[escolhacurso]= 606;
        break;
    case 6:
        curso[escolhacurso]= 7;
        break;
    default:
        printf("Opcao invalida");

        }
        printf("Digite o codigo do aluno: ");
        scanf("%i", &alunos[contador].matricula);

        if(0<=alunos[contador].matricula && alunos[contador].matricula<=9999){

        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[contador].nome);
        printf("Digite a nota do primeiro bimestre do aluno: ");
        scanf("%f", &alunos[contador].nota1);
        printf("Digite a nota do segundo bimestre do aluno: ");
        scanf("%f", &alunos[contador].nota2);
        alunos[contador].nota1 = alunos[contador].nota1*0.4;

        alunos[contador].nota2 = alunos[contador].nota2*0.6;

        media[contador] =  alunos[contador].nota1 +  alunos[contador].nota2;

         printf("%.2f \n ", media[contador]);
         contador++;
         printf(" Aluno cadastrado com sucesso. \n");
        } else{
        printf("**************************\n");
        printf("Numero invalida\n");
        printf("**************************\n");
        }
        } else{
        printf("**************************\n");
        printf("Numero invalida\n");
        printf("**************************\n");
        }
        } else{
        printf("**************************\n");
        printf("Numero invalido\n");
        printf("**************************\n");
        }
        break;
        case 2:
        for(int i =0; i<contador; i++){

            printf("Alunos cadastrados: \n");
            printf("Matricula : %i%i%i%i -- %s -- %.2f -- %.2f-- %.2f\n", ano[i],semestre[i],curso[i],alunos[i].matricula, alunos[i].nome,alunos[i].nota1, alunos[i].nota2, media[i]);

        }

        break;
        case 3:
            printf("O programa ah seguir tem a funcao de cadastrar, matriculas, nomes e notas dos alunos,\n");
            printf("Basta apenas selecionar a opção desejada.\n");

        break;
         case 4:
             printf("Programa encerrado com sucesso");

        break;
        default:
        printf("Opcao invalida\n");
        }


      }
        while(menu!=4);

return 0;

}