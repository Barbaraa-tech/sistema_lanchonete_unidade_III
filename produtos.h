#ifndef PRODUTOS_H
#define PRODUTOS_H

#define MAX 100

typedef struct
{
    char nome[50];
    float preco;
} Produto;

extern Produto cardapio[MAX];
extern int totalProdutos;

// Funções do sistema
void adicionarProduto(void);
void listarProdutos(void);
void atualizarProduto(void);
void removerProduto(void);

#endif
