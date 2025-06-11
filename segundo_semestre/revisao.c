#include <stdio.h>
#include <stdlib.h>

// Funções -> Pass. Param Valor / Ref
// Recursividade
// Estruturas
// Memória dinâmica
// Arquivos texto / Binário
Deletar p2
1º Busca p2 pelo CPF, se não encontrado, não faz nada
2º Identifandp o índice, sobrepõe o índice atual com a pessoa da frente até o fim do vetor.
[p1][p2][p3][p4]
        /   /
       /   /
[p1][p3][p4][p4] 
3º Para eliminar o último índice, redimensiona o vetor
com um índice a menos.
tam_vetor--;
realloc(pessoas, sizeof(Pessoa) * tam_vetor);

typedef struct pessoa {
  char nome[200];
  char cpf[12];
  unsigned int idade;
} Pessoa;

// Variaveis globais
Pessoa *pessoas = NULL;
int tam_vetor = 0;
// Operações com pessoas.
void inserir(Pessoa p); // utilizar alocação din.
void deletar(char *cpf); // utilizar alocação din.
void listar();
void buscar(char *cpf);
void carregar_vetor_txt(char *caminho_arquivo); // alocação din.
void salvar_vetor_txt(char *caminho_arquivo);
void carregar_vetor_bin(char *caminho_arquivo); // alocação din.
void salvar_vetor_bin(char *caminho_arquivo);

// funções auxiliares
void ler_cpf(char *cpf, char *operacao) {
  printf("Forneça o CPF a ser %s: ", operacao);
  scanf("%11s%*c", cpf);
}

void ler_pessoa(Pessoa *p) {
  printf("Nova pessoa:\n");
  printf("-------------------------\n");
  printf("Nome: "); scanf("%199[^\n]%*c", p->nome);
  printf("CPF: "); scanf("%11s%*c", p->cpf);
  printf("Idade: "); scanf("%d%*c", &p->idade);
}

void ler_caminho(char *caminho) {
  printf("Forneça o caminho do arquivo: ");
  scanf("%99s", caminho);
}


int main() {
  char ch = '\0';
  while(ch != 'q' && ch != 'Q') {
    printf("\033[2J\033[H");
    printf("      Lista de Contatos    \n");
    printf("---------------------------\n");
    printf("1 - Listar.\n");
    printf("2 - Buscar.\n");
    printf("3 - Inserir.\n");
    printf("4 - Deletar.\n");
    printf("5 - Carregar pessoas (TXT).\n");
    printf("6 - Salvar pessoas (TXT).\n");
    printf("7 - Carregar pessoas (BIN).\n");
    printf("8 - Salvar pessoas (BIN).\n");
    printf("Opção: ");
    scanf("%c%*c", &ch);

    switch(ch) {
      case '1': listar(); break;
      case '2': {
        char cpf[12];
        ler_cpf(cpf, "buscado");
        buscar(cpf);
        break;
      }
      case '3': {
        Pessoa p;
        ler_pessoa(&p);
        inserir(p);
        break;
      }
      case '4': {
        char cpf[12];
        ler_cpf(cpf, "deletado");
        deletar(cpf);
        break;
      }
      case '5': {
        char caminho_arquivo[100];
        ler_caminho(caminho_arquivo);
        carregar_vetor_txt(caminho_arquivo);
        break;
      }
      case '6': {
        char caminho_arquivo[100];
        ler_caminho(caminho_arquivo);
        salvar_vetor_txt(caminho_arquivo);
        break;
      }
      case '7': {
        char caminho_arquivo[100];
        ler_caminho(caminho_arquivo);
        carregar_vetor_bin(caminho_arquivo);
        break;
      }
      case '8': {
        char caminho_arquivo[100];
        ler_caminho(caminho_arquivo);
        salvar_vetor_bin(caminho_arquivo);
        break;
      }
    }
    printf("Pressione enter para continuar.");
    getchar();
  }
  

  return 0;
}

// Operações com pessoas.
void inserir(Pessoa p) { // utilizar alocação din.
  
} 
void deletar(char *cpf) { // utilizar alocação din.

} 
void listar() {
  if(tam_vetor == 0) {
    printf("Lista vazia!\n");
    return;
  }
  for(int i = 0; i < tam_vetor; i++) {
    printf("{nome: %s, CPF: %s, idade: %d}\n",
      pessoas[i].nome, pessoas[i].cpf, pessoas[i].idade);
  }
}
void buscar(char *cpf) {
  
}
void carregar_vetor_txt(char *caminho_arquivo)  { // utilizar alocação din.
  // 1 - Abrir arquivo
  FILE *input = fopen(caminho_arquivo, "r");
  // 2 - Garantir que abriu com sucesso
  if(!input) {
    fprintf(stderr, "Arquivo inválido!\n");
    return;
  }
  // 3 - Ler dados
  // padrão dos dados: %[^\t]\t%s\t%d%*c
  Pessoa p;
  int dados_lidos;
  while(!feof(input)) {
    dados_lidos = fscanf(input, "%[^\t]\t%s\t%d\n",
      p.nome, p.cpf, &p.idade);
    if(dados_lidos != 3) break;
    tam_vetor++;
    pessoas = realloc(pessoas, sizeof(Pessoa)*tam_vetor);
    sprintf(pessoas[tam_vetor-1].nome, "%s", p.nome);
    sprintf(pessoas[tam_vetor-1].cpf, "%s", p.cpf);
    pessoas[tam_vetor-1].idade = p.idade;
  }
  printf("Contatos carregados com sucesso!\n");
  // 4 - Fechar o arquivo
  fclose(input);
} 
void salvar_vetor_txt(char *caminho_arquivo) {
  
}
void carregar_vetor_bin(char *caminho_arquivo)  { // utilizar alocação din.

} 
void salvar_vetor_bin(char *caminho_arquivo) {
  
}