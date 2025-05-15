#include <stdio.h>
#include "banco.h"

// Realizar o depósito
void realizarDeposito(float *saldo) {
    float valor;
    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valor);

    if (valor > 0) {
        *saldo += valor;
        printf("Depósito de R$ %.2f feito com sucesso!\n", valor);
    } else {
        printf("Valor inválido para depósito.\n");
    }
}

// Realizar o saque
void realizarSaque(float *saldo) {
    float valor;
    printf("Digite o valor a ser sacado: R$ ");
    scanf("%f", &valor);

    if (valor > 0 && valor <= *saldo) {
        *saldo -= valor;
        printf("Saque de R$ %.2f feito com sucesso!\n", valor);
    } else if (valor > *saldo) {
        printf("Saldo insuficiente para o saque.\n");
    } else {
        printf("Valor inválido para saque.\n");
    }
}

// Função para exibir o saldo atual
void exibirSaldo(float saldo) {
    printf("Saldo atual: R$ %.2f\n", saldo);
}
