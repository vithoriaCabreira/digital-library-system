#ifndef LIVRO_H // Evita que este arquivo seja incluído mais de uma vez durante a compilação.
#define LIVRO_H

#define MAX_TITULO 100 //define o tamanho maximo do titulo do livro
#define MAX_AUTOR 100 //define o tamanho maximo do autor do livro
#define MAX_EDITORA 100 //define o tamanho maximo da editora do livro

typedef struct{ //usando o typedef para criar um apelido para a struct
    int id;
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    char editora[MAX_EDITORA];
    int anoPublicacao;
    int quantidadeTotal;
    int quantidadeDisponivel;
} Livro;

void cadastrarLivro(void); //declaração da função cadastrarLivro

#endif