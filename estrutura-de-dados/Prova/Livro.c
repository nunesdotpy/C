#include <stdio.h>
#include <stdlib.h>

#define QTD 100
#define TITULO 20
#define AUTOR 20

typedef struct{
    char titulo[TITULO];
    char autor[AUTOR];
    char n[AUTOR];
    float numeroDoCatalogo;
    int anoDePublicacao;
    int numeroDaCopia;

    char dataEmprestimo[10];
    char dataRetorno[10];
}LIVRO;

int menu(void);
void cadastroLivro(LIVRO[QTD]);
void exibirLivro(LIVRO[QTD]);
void procurarLivroT(LIVRO[QTD]);
void procurarLivroA(LIVRO[QTD]);
void regEmprestimo(LIVRO[QTD]);
void regRetorno(LIVRO[QTD]);
void editLivro(LIVRO[QTD]);

int nl = 0;
int emp[QTD];
int ret[QTD];

int main(){
    LIVRO biblioteca[QTD];
	menu();
	
	

}

int menu(void){
		LIVRO biblioteca[QTD];
	
	    int opt, i = 1;
		while (i = 1){
    	printf("BIBLIOTECA DA IES\n");
    	printf("1 - INSERIR NOVO LIVRO\n");
    	printf("2 - PROCURAR LIVRO POR TITULO\n");
    	printf("3 - PROCURAR LIVRO POR AUTOR\n");
    	printf("4 - ALTERAR NOME DO LIVRO\n");
    	printf("5 - REGISTRAR DATA DE EMPRESTIMO DE UM LIVRO\n");
    	printf("6 - REGISTRAR DATA DE RETORNO DE UM LIVRO\n");
    	printf("7 - LISTAR LIVROS EXISTENTES NA BIBLIOTECA\n");
    	printf("8 - SAIR\n>> ");
    	scanf("%d", &opt);
    	switch(opt){
    		case 1:
    			system("cls");
    			cadastroLivro(biblioteca);
    			nl += 1;
    			break;
    		case 2:
    			system("cls");
    			procurarLivroT(biblioteca);
    		case 3:
    			system("cls");
    			procurarLivroA(biblioteca);
				break;
			case 4:
				system("cls");
				editLivro(biblioteca);
				break;
			case 5:
				system("cls");
				regEmprestimo(biblioteca);
				fflush(stdin);
				break;
    		case 6:
    			system("cls");
    			regRetorno(biblioteca);
    			break;
    			fflush(stdin);
    		case 7:
    			system("cls");
    			printf("######################################\n");
    			exibirLivro(biblioteca);
    			break;
    		case 8:
    			return 0;
		}
	}
}

void editLivro(LIVRO biblioteca[QTD]){
	int opt;
	
	printf("Pesquisar livro por:\n1 - TITULO\n2 - AUTOR\n>> ");
	scanf("%d", &opt);
	
	//Pesquisar por autor
	if(opt == 2){
		procurarLivroA(biblioteca);
	}else{
		procurarLivroT(biblioteca);
	}
	printf("Digite o novo Titulo: ", nl);
	gets(biblioteca[nl-1].titulo);
}

void cadastroLivro(LIVRO biblioteca[QTD]){
    char n[1];

        printf("Cadastrando livro\n");
		
		fflush(stdin);
		
        printf("Titulo do livro: ");
        gets(biblioteca[nl].titulo);

        printf("Autor do livro: ");
        gets(biblioteca[nl].autor);

        printf("Numero do catalogo: ");
        scanf("%f", &biblioteca[nl].numeroDoCatalogo);

        printf("Ano de publicacao: ");
        scanf("%d", &biblioteca[nl].anoDePublicacao);

        printf("Numero da copia: ");
        scanf("%d", &biblioteca[nl].numeroDaCopia);
        printf("######################################\n\n");
}

void exibirLivro(LIVRO biblioteca[QTD]){

    int i;

    for(i = 0; i < nl; i++){
    	printf("Livro %d\n", i+1);
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].autor);
        printf("Numero do catalogo: %.2f\n", biblioteca[i].numeroDoCatalogo);
        printf("Ano de publicacao: %d\n", biblioteca[i].anoDePublicacao);
        printf("Numero da copia: %d\n", biblioteca[i].numeroDaCopia);
        if(emp[i] != 0){
        	printf("DATA DE EMPRESTIMO: %s\n", biblioteca[i].dataEmprestimo);
		}
		if(ret[i] != 0){
			printf("DATA DE RETORNO: %s\n", biblioteca[i].dataRetorno);
		}
        printf("######################################\n\n");
    }
}

void procurarLivroT(LIVRO biblioteca[QTD]){
	int i;
	char label[TITULO];
	
	fflush(stdin);
	
	printf("Digite o Titulo do livro: ");
	gets(label);
	
	for(i = 0; i < nl; i++) {
		if(strcmp(biblioteca[i].titulo, label) == 0){
			system("cls");
			printf("Livro %d\n", i+1);
        	printf("Titulo: %s\n", biblioteca[i].titulo);
      		printf("Autor: %s\n", biblioteca[i].autor);
        	printf("Numero do catalogo: %.2f\n", biblioteca[i].numeroDoCatalogo);
        	printf("Ano de publicacao: %d\n", biblioteca[i].anoDePublicacao);
        	printf("Numero da copia: %d\n", biblioteca[i].numeroDaCopia);
        	printf("######################################\n\n");
		}
	}
}

void procurarLivroA(LIVRO biblioteca[QTD]){
	int i;
	char label[TITULO];
	
	fflush(stdin);
	
	printf("Digite o Autor do livro: ");
	gets(label);
	
	for(i = 0; i < nl; i++) {
		if(strcmp(biblioteca[i].autor, label) == 0){
			system("cls");
			printf("Livro %d\n", i+1);
        	printf("Titulo: %s\n", biblioteca[i].titulo);
      		printf("Autor: %s\n", biblioteca[i].autor);
        	printf("Numero do catalogo: %.2f\n", biblioteca[i].numeroDoCatalogo);
        	printf("Ano de publicacao: %d\n", biblioteca[i].anoDePublicacao);
        	printf("Numero da copia: %d\n", biblioteca[i].numeroDaCopia);
        	printf("######################################\n\n");
		}
	}
}

void regEmprestimo(LIVRO biblioteca[QTD]){
	int opt;
	
	fflush(stdin);
	
	printf("Pesquisar livro por:\n1 - TITULO\n2 - AUTOR\n>> ");
	scanf("%d", &opt);
	
	//Pesquisar por autor
	if(opt == 2){
		procurarLivroA(biblioteca);
	}else{
		procurarLivroT(biblioteca);
	}	
	printf("DATA DE EMPRESTIMO: ");
	gets(biblioteca[nl-1].dataEmprestimo);
	emp[nl-1]++;
}

void regRetorno(LIVRO biblioteca[QTD]){
	int opt;
	
	fflush(stdin);
	
	printf("Pesquisar livro por:\n1 - TITULO\n2 - AUTOR\n>> ");
	scanf("%d", &opt);
	
	//Pesquisar por autor
	if(opt == 2){
		procurarLivroA(biblioteca);
	}else{
		procurarLivroT(biblioteca);
	}	
	printf("DATA DE RETORNO: ");
	gets(biblioteca[nl-1].dataRetorno);
	ret[nl-1]++;
}
