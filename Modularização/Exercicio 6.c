/******************************************************************************
Lucas Pellegrini Vasco
2an
 
******************************************************************************/
#include <stdio.h>

void Asteriscos(int numero) {
    int contador = 0;
    while (contador < numero) {
        printf("*");
        contador++;
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    Asteriscos(numero);
    return 0;
}


