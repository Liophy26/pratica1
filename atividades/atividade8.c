#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
  char nome[200];
  unsigned int idade;
} Pessoa;

void escrever_pessoas_bin(
  char *caminho_arqivo, 
  int n_pessoas, 
  Pessoa pessoas[n_pessoas]  
) {
  //
  FILE *out_bin ; 
  //1. abertura de arquivo nessa linha
    out_bin = fopen(caminho_arqivo,"wb");
     
  //2. validação da abertura
   if(out_bin == NULL){
       fprintf(stderr,"Erro ao abrir\n");
   }
  //3. escrever dados
    else fwrite(pessoas,sizeof(Pessoa), n_pessoas, out_bin);
  //4. fechar o arquivo
  fclose(out_bin);

}

Pessoa *ler_pessoas_bin(char *caminho_arquivo, int n_pessoas) {
    //
    FILE *inp_bin;
    //1. abertura de arquivo nessa linha
    inp_bin = fopen(ler_pessoas_bin,"rb");
    //2. validação da abertura
    if(inp_bin == NULL){
        fprinf(stderr,"Erro ao abrir\n");
    }
    //3. ler dados
    else fread(pessoas,sizeof(Pessoa), n_pessias, inp_bin);
    Pessoa *pessoas = NULL;
    fclose(inp_bin);
   
    //4. fechar o arquivo
  
    return pessoas;
  }

int main(void) {
     
  Pessoa pessoas[5] = {
    {.nome = "João Marcos", .idade = 25},
    {.nome = "Ana Maria", .idade = 21},
    {.nome = "Beto", .idade = 18},
    {.nome = "Caio", .idade = 22},
    {.nome = "Davi", .idade = 19}
    
  };

  
  
  return 0;
}