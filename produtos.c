#ifndef PRODUTOS_H
#define PRODUTOS_H

#define MAX 100

typedef struct
{
    char nome[50];
    float preco;
} Produto;

/* Funções do sistema */
void adicionarProduto(Produto cardapio[], int *totalProdutos);

void listarProdutos(Produto cardapio[], int totalProdutos);

void atualizarProduto(Produto cardapio[], int totalProdutos);

void removerProduto(Produto cardapio[], int *totalProdutos);

#endif
