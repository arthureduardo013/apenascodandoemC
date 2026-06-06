#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo = 100;
    int opção;

    do {
    system("cls");
    printf("==Banco Intergalatico==");
    printf("\n");
    printf("Opções dispónivel:");
    printf("\n");
    printf("1.Para depositar 50 créditos.");
    printf("\n");
    printf("2.Para sacar 20 créditos.");
    printf("\n");
    printf("0.Para sair do Banco");
    scanf(" %d", &opção);

    switch (opção)
    {
    case 1: (saldo = saldo + 50);
        printf("depósito realizado valor em saldo : %d", saldo);
        break;
    case 2: if (saldo >= 20) {
        saldo = saldo - 20;
        printf("saldo na conta após saque %d", saldo);
    } else {
        printf("você não tem saldo o suficiente");
    }
        break;
    case 0: 
        printf("Saindo do Banco obrigado pela preferência");
        break;
    default:
    printf("opção invalida tente novamente");
        break;
    }
    if (opção != 0) {
        printf("pressione enter para continuar");
        fflush(stdin);
        getchar();
    }
    
   
    } while (opção != 0);
    
     return 0;
    
}