/**********************************************************************
* Componente Curricular: Algoritmos/Laboratório de Algoritmos
* Projeto Final: Sistema de Lanchonete
* Turma: PET2018 - Laboratório de Algoritmos - T01 (2026.1)
*
* Matrículas, Integrantes e Responsabilidades:
*
* 1. 2025022019 - Francisca Mirelly Bezerra Pessoa
*    Responsável por: Validação de dados e testes
*
* 2. 2025022031 - Barbara Aquino de Jesus
*    Responsável por: Cadastro e listagem de produtos
*
* 3. 2023023111 - Clayton dos Santos Bernardino
*    Responsável por: Atualização e remoção de produtos
*
* 4. 2025021998 - Fabio Luan Pereira Melo
*    Responsável por: Funções auxiliares e organização do sistema
*
* 5. 2025010766 - Rafael Caetano Fernandes da Silva
*    Responsável por: Documentação, README e vídeo explicativo
*
**********************************************************************/

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

    if (cardapio[*totalProdutos].preco < 0)
    {
        printf("Preco invalido!\n");
        return;
    }

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

    printf("\n======= CARDAPIO =======\n");

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
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    listarProdutos(cardapio, totalProdutos);

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    if (codigo < 1 || codigo > totalProdutos)
    {
        printf("Codigo invalido!\n");
        return;
    }

    printf("Novo nome: ");
    scanf(" %[^\n]", cardapio[codigo - 1].nome);

    printf("Novo preco: ");
    scanf("%f", &cardapio[codigo - 1].preco);

    if (cardapio[codigo - 1].preco < 0)
    {
        printf("Preco invalido!\n");
        return;
    }

    printf("Produto atualizado com sucesso!\n");
}

void removerProduto(Produto cardapio[], int *totalProdutos)
{
    int codigo;

    if (*totalProdutos == 0)
    {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    listarProdutos(cardapio, *totalProdutos);

    printf("Digite o codigo para remover: ");
    scanf("%d", &codigo);

    if (codigo < 1 || codigo > *totalProdutos)
    {
        printf("Codigo invalido!\n");
        return;
    }

    for (int i = codigo - 1; i < *totalProdutos - 1; i++)
    {
        cardapio[i] = cardapio[i + 1];
    }

    (*totalProdutos)--;

    printf("Produto removido com sucesso!\n");
}
