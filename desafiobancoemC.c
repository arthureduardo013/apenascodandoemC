#include <stdio.h>
#include <stdlib.h>

int main() {

    int saldo = 100;
    int opcao;

    do {

        system("cls");

        printf("== Banco Intergalatico ==\n");
        printf("1. Depositar 50 creditos\n");
        printf("2. Sacar 20 creditos\n");
        printf("0. Sair\n");
        printf("Escolha: ");

        scanf("%d", &opcao);

        switch (opcao) {

        case 1:
            saldo += 50;
            printf("Deposito realizado. Saldo: %d\n", saldo);
            break;

        case 2:
            if (saldo >= 20) {
                saldo -= 20;
                printf("Saque realizado. Saldo: %d\n", saldo);
            } else {
                printf("Saldo insuficiente!\n");
            }
            break;

        case 0:
            printf("Saindo do banco. Obrigado pela preferencia!\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

        if (opcao != 0) {
            printf("\nPressione Enter para continuar...");
            getchar();
            getchar();
        }

    } while (opcao != 0);

    return 0;
}