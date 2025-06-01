#include <stdio.h>


int main(){
    /*Arquivos:
    - stdout -> impreme no console (modo escrita)
    - stderr -> imprime no console (modo escrita)
    - stdin -> ler dados do console (modo leitura)
    */
    FILE *out = fopen("./dados/nomes.txt","w");
    
    printf("Ola mundo! - console\n");
    fprintf(out, "Ola mundo! - arquivo\n");
    char buffer[1000];
    fscanf(stdin,"%s", &buffer[0]);
    fprintf(out, "Buffer: %s\n", buffer);
    //fscanf(stdin, "%s", &buffer[0]);
   // fprintf(out, "Buffer: %s\n", buffer);

    //indica ao SO que o programa finalizou sem erros
    return 0;
}