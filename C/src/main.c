#include <stdio.h>
#include "../Atividade/banco.h"

int main() {
    float saldo = 0.0;
    int opcao;

    // Menu
    do {
        printf("\n----- Sistema Bancário -----\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Consultar Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                realizarDeposito(&saldo);  // Função de depósito
                break;
            case 2:
                realizarSaque(&saldo);  // Função de saque
                break;
            case 3:
                exibirSaldo(saldo);  // Mostra o saldo atual
                break;
            case 4:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
