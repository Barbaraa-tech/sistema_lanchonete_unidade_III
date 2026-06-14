/**********************************************************************
* Componente Curricular: Laboratório de Algoritmos
* Projeto: Sistema de Lanchonete
* Turma: PET2018 - T01 (2026.1)
*
* Integrantes:
* - Barbara Aquino de Jesus
* - Francisca Mirelly Bezerra Pessoa
* - Clayton dos Santos Bernardino
* - Fabio Luan Pereira Melo
* - Rafael Caetano Fernandes da Silva
**********************************************************************/

#include <stdio.h>
#include <locale.h>
#include "produtos.h"

int main(void)
{
    setlocale(LC_ALL, ".UTF8");

    int opcao;

    do
    {
        printf("\n=================================\n");
        printf("      SISTEMA DE LANCHONETE      \n");
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
                adicionarProduto();
                break;

            case 2:
                listarProdutos();
                break;

            case 3:
                atualizarProduto();
                break;

            case 4:
                removerProduto();
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
