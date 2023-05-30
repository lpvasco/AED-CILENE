/******************************************************************************
Lucas Pellegrini Vasco
2an
******************************************************************************/

#include <stdio.h>

int cubo(int numero) {
    return (numero * numero * numero);
}

int main() {
    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    
    int resultado = cubo(numero);
    printf("O cubo de %d � %d\n", numero, resultado);
    
    return 0;
}
