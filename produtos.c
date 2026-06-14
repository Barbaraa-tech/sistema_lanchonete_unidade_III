#include <stdio.h>
#include <string.h>
#include "produtos.h"

void adicionarProduto(Produto cardapio[], int *totalProdutos)
{
    if (*totalProdutos >= MAX)
    {
        printf("Limite de produtos atingido.\n");
        return;
    }

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", cardapio[*totalProdutos].nome);

    printf("Digite o preco do produto: ");
    scanf("%f", &cardapio[*totalProdutos].preco);

    (*totalProdutos)++;

    printf("Produto cadastrado com sucesso!\n");
}

void listarProdutos(Produto cardapio[], int totalProdutos)
{
    if (totalProdutos == 0)
    {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("\n===== CARDAPIO =====\n");

    for (int i = 0; i < totalProdutos; i++)
    {
        printf("%d - %s - R$ %.2f\n",
               i + 1,
               cardapio[i].nome,
               cardapio[i].preco);
    }
}

void atualizarProduto(Produto cardapio[], int totalProdutos)
{
    int codigo;

    if (totalProdutos == 0)
    {
        printf("Nao existe produto cadastrado.\n");
        return;
    }

    listarProdutos(cardapio, totalProdutos);

    printf("Digite o codigo do produto que deseja alterar: ");
    scanf("%d", &codigo);

    if (codigo < 1 || codigo > totalProdutos)
    {
        printf("Produto invalido!\n");
        return;
    }

    printf("Novo nome: ");
    scanf(" %[^\n]", cardapio[codigo - 1].nome);

    printf("Novo preco: ");
    scanf("%f", &cardapio[codigo - 1].preco);

    printf("Produto atualizado com sucesso!\n");
}

void removerProduto(Produto cardapio[], int *totalProdutos)
{
    int codigo;

    if (*totalProdutos == 0)
    {
        printf("Nao existe produto cadastrado.\n");
        return;
    }

    listarProdutos(cardapio, *totalProdutos);

    printf("Digite o codigo do produto que deseja remover: ");
    scanf("%d", &codigo);

    if (codigo < 1 || codigo > *totalProdutos)
    {
        printf("Produto invalido!\n");
        return;
    }

    for (int i = codigo - 1; i < *totalProdutos - 1; i++)
    {
        cardapio[i] = cardapio[i + 1];
    }

    (*totalProdutos)--;

    printf("Produto removido com sucesso!\n");
}
