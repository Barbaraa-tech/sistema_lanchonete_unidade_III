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
#include <locale.h>
#include "produtos.h"

int main(void)
{
    setlocale(LC_ALL, ".UTF8");

    Produto cardapio[MAX];
    int totalProdutos = 0;
    int opcao;

    do
    {
        printf("\n=================================\n");
        printf("      SISTEMA DE LANCHONETE\n");
        printf("=================================\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Atualizar produto\n");
        printf("4 - Remover produto\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                adicionarProduto(cardapio, &totalProdutos);
                break;

            case 2:
                listarProdutos(cardapio, totalProdutos);
                break;

            case 3:
                atualizarProduto(cardapio, totalProdutos);
                break;

            case 4:
                removerProduto(cardapio, &totalProdutos);
                break;

            case 0:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
