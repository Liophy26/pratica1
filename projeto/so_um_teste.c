#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
struct aluno_t{ 
    long int matricula;
    float nota1;
    float nota2;
    char nome[30];
    
};

int check=0;
int ano[15];
int menu = 3;
int semestre[15];
int curso[15];
int escolhacurso;
float media[15];
struct aluno_t alunos[15];

    do{
        if(menu==3){
    printf("0 - Lansar nota do aluno; \n");
    printf("1 - Sobre o Programa;\n");
    printf("11 - Sair;\n");
    printf("Escolha o que deseja: ");
    scanf("%i", &menu);
    if(menu==0){
        
for(int i=0; i<15; i++){

while(check==0){
printf("Insira os dois ultimos numeros do ano de matricula: ");
scanf("%i", &ano[i]);
while(getchar()!='\n');

if(0<=ano[i
]<=24){
check=1;
    
        }else{
printf("Ano invalido. Tente novamente\n");
        }
}

while(check==1){
printf("Insira qual o semestre de matricula do aluno: ");
scanf("%i", &semestre[i]);
while(getchar()!='\n');

if(semestre[i]==1||2){
check=2;
    
        }else{
printf("Semestre invalido. Tente novamente\n");
        }
}
while(check==2){
printf("Escolha entre os cursos listados:\n ");
printf("1 - Ciencia da computacao\n");
printf("2 - Engenharia da computacao\n");
printf("3 - Gastronomia\n");
printf("4 - Moda\n");
printf("5 - Analise e Desenvolvimento de Sistemas\n");
printf("6 - Cinema\n");
scanf("%i", &escolhacurso);
while(getchar()!='\n');

switch(escolhacurso){
case 1 : {curso[i]= 213; check=3;}; break;
case 2 : {curso[i]= 225; check=3;}; break;
case 3 : {curso[i]= 314; check=3;}; break;
case 4 : {curso[i]= 501; check=3;}; break;
case 5 : {curso[i]= 606; check=3;}; break;
case 6 : {curso[i]= 007; check=3;}; break;
default: {printf("Curso Invalido");};


}
}

while (check==3){
printf("Insira o codigo do aluno: ");
scanf("%i", &alunos[i].matricula );
while(getchar()!='\n');
check = 4;}

if(0<alunos[i].matricula<=9999){
check=4;
}else {
    printf("Codigo Invalido. Tente novamente");
}
while(check==4){

printf("Insira o nome do aluno: ");
scanf("%[^\n]s", alunos[i].nome );
while(getchar()!='\n');
check = 5;
}
check = 5;

while(check==5){
printf("Insira o nota do primeiro bimestre do aluno: ");
scanf("%f", &alunos[i].nota1 ); 
alunos[i].nota1 = alunos[i].nota1*0.4;
while(getchar()!='\n');
check=6;
if(0<=alunos[i].nota1<=10){
    check=6;

} else{
    printf("Nota invalida. Tente novamente.\n");
}
}

while(check==6){
printf("Insira o nota do segundo bimestre do aluno: ");
scanf("%f", &alunos[i].nota2 );
alunos[i].nota2 = alunos[i].nota2 *0.6;
while(getchar()!='\n');

check=7;
if(0<=alunos[i].nota2<=10){
    check=7;
}else{
    printf("Nota invalida. Tente novamente.\n");
}
}while(check==7){


for(int i=0; i<15; i++){
    media[i] = alunos[i].nota1 + alunos[i].nota2;
    printf("%i%i%i%i || %s || %.1f  %.1f  %.1f\n",ano[i],semestre[i],curso[i],alunos[i].matricula,alunos[i].nome ,alunos[i].nota1,alunos[i].nota2, media[i] );
    menu=3;
    while(getchar()!='\n');
    
}

} 


}

        
    }
    }
    else if(menu==1){
         printf("O programa tem a funcao de armazenar e calcular a nota dos alunos, basta selecionar a funcao que deseja\n");
         printf("3 - Voltar\n");
         scanf("%i", &menu);
    }
    else if(menu==11){
     printf("Programa encerrado\n");
    }
    else{
    
        printf("Opcao nao encontrada, tente novamente\n");
        menu = 3;
    }
    check = 0;
    }
    while(menu!=11);
return 0;

}