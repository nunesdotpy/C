#include <stdio.h>

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

int main(){
    LIVRO biblioteca[QTD];
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