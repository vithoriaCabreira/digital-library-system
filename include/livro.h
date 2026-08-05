#ifndef LIVRO_H //inclui a struct livro apenas uma vez no codigo
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
    int quntidadeTotal;
    int quantidadeDisponivel;
} Livro;

#endif