/******************************************************************************
Lucas Pellegrini Vasco
2an
******************************************************************************/
#include <stdio.h>

float saldo = 0.0;

void deposito() {
    float valor;
    printf("\nDigite o valor do deposito: ");
    scanf("%f", &valor);
    saldo += valor;
    printf("\nDeposito realizado com sucesso!\n");
}

void saque() {
    float valor;
    if (saldo <= 0.0) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    printf("\nDigite o valor do saque: ");
    scanf("%f", &valor);
    if (valor > saldo) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    saldo -= valor;
    printf("\nSaque realizado com sucesso!\n");
}

void consultaSaldo() {
    printf("\nSeu saldo atual �: R$%.2f\n", saldo);
}

int main() {
    int opcao = 0;
    while (opcao != 4) {
    	
        printf("\nSelecione uma opcao:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Consulta de saldo\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                consultaSaldo();
                break;
            case 4:
                printf("\nEncerrando programa...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
                break;
        }
    }
    return 0;
}

