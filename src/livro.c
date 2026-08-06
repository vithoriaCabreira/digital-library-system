#include "livro.h"
#include <stdio.h>


#define MAX_LIVROS 100 //define o tamanho maximo do vetor de livros 

Livro biblioteca[MAX_LIVROS]; //vetor de livros

int quantidadeLivros = 0; //variavel para controlar a quantidade de livros cadastrados na biblioteca
int proximoId = 1; //variavel para controlar o proximo id a ser atribuido a um livro


void cadastrarLivro(void){

    if(quantidadeLivros >= MAX_LIVROS){
        printf("Biblioteca cheia!");
        return;
    }

    Livro novoLivro;
    novoLivro.id = proximoId++;

    printf("\n===== Cadastro de Livro =====\n");

    printf("Titulo: ");
    scanf(" %[^\n]", novoLivro.titulo);

    printf("Autor: ");
    scanf(" %[^\n]", novoLivro.autor);

    printf("Editora: ");
    scanf(" %[^\n]", novoLivro.editora);

    printf("Ano: ");
    scanf("%d", &novoLivro.anoPublicacao);

    printf("Quantidade: ");
    scanf("%d", &novoLivro.quantidadeTotal);

    novoLivro.quantidadeDisponivel = novoLivro.quantidadeTotal;

    biblioteca[quantidadeLivros] = novoLivro;
    quantidadeLivros++;

    printf("\nLivro cadastrado com sucesso!\n");
}