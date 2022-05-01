#include <stdio.h>
#include <stdlib.h>

#define QTD 1
#define TITULO 20
#define AUTOR 20

typedef struct{
    char titulo[TITULO];
    char autor[AUTOR];
    float numeroDoCatalogo;
    int anoDePublicacao;
    int numeroDaCopia;

    char dataEmprestimo[10];
    char dataRetorno[10];
}LIVRO;

void cadastroLivro(LIVRO[QTD]);
void exibirLivro(LIVRO[QTD]);
void procurarLivro(LIVRO[QTD]);

int main(){
    LIVRO biblioteca[QTD];
    int opt;

    printf("Escolha uma funcao: \n");
    printf("1 - INSERIR NOVO LIVRO\n");
    printf("2 - PROCURAR LIVRO\n");
    printf("3 - ALTERAR NOME DO LIVRO\n");
    printf("4 - EMPRESTIMO\n");
    printf("5 - LISTAR LIVROS EXISTENTES\n");
    printf("6 - SAIR\n>> ");
    scanf("%d", &opt);
    if(opt == 1){
        procurarLivro(biblioteca);
    }else if(opt == 2){
        cadastroLivro(biblioteca);
    }

    cadastroLivro(biblioteca);
}

void cadastroLivro(LIVRO biblioteca[QTD]){
    int i;

    for(i = 0; i < QTD; i++){
        printf("Cadastrando livro\n");

        printf("Titulo do livro: ");
        gets(biblioteca[i].titulo);

        printf("Autor do livro: ");
        gets(biblioteca[i].autor);

        printf("Numero do catalogo: ");
        scanf("%f", &biblioteca[i].numeroDoCatalogo);

        printf("Ano de publicacao: ");
        scanf("%d", &biblioteca[i].anoDePublicacao);

        printf("Numero da copia: ");
        scanf("%d", &biblioteca[i].numeroDaCopia);

        fflush(stdin);
    }
}

void exibirLivros(LIVRO biblioteca[QTD]){

    int i;

    for(i = 0; i < QTD; i++){
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].autor);
        printf("Numero do catalogo: %f\n", biblioteca[i].numeroDoCatalogo);
        printf("Ano de publicacao: %d\n", biblioteca[i].anoDePublicacao);
        printf("Numero da copia: %d\n", biblioteca[i].numeroDaCopia);

        printf("#########################\n");
    }
}

void procurarLivro(LIVRO biblioteca[QTD]){

}