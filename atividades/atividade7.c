#include <stdio.h>

void escrever_arquivo_txt(char *caminho_arquivo, int n, int vet[n]){
    FILE *fp = fopen(caminho_arquivo, "w");
    if(fp == NULL){
        printf(stderr, "Caminho do arquivo invalido.\n");

        return;
    }
    // logica para armazenamento de dados no arquivo
    
    // ler os dados do vertor vet e armazenar cada um em uma linha no arquivo

    for (int i = 0; i < n; i++)
    fprintf(fp,"%d\n", vet[i]);
    fclose(fp);
}
void ler_arquivo_txt(char *caminho_arquivo){
    FILE *fp = fopen(caminho_arquivo, "r");
    if(fp == NULL){
        printf(stderr, "Caminho do arquivo invalido.\n");

        return;

    }
    // operações de leitura
    while(!feof(fp)){
        int num;
        fscanf(fp, "%d",&num);
        printf("dado lido: %d\n", num);
    }

    //encerra arquivo
    fclose(fp);
}
int main(){
    int vet [5] = {5, 3, 2, 7, 9};
    escrever_arquivo_txt("./dados/numeros.txt", 5, vet);
    ler_arquivo_txt("./dados/numeros.txt");
    return 0;
}