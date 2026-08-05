#ifndef LIVRO_H //inclui a struct livro apenas uma vez no codigo
#define LIVRO_H

typedef struct{ //usando o typedef para criar um apelido para a struct
    int id;
    char titulo[100];
    char autor[100];
    char editora[100];
    int anoPublicacao;
    int quntidadeTotal;
    int quantidadeDisponivel;
} Livro;

#endif