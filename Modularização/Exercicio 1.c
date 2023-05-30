/******************************************************************************
Lucas Pellegrini Vasco
2an
******************************************************************************/
#include <stdio.h>

int main() {
    int  v1, v2, resultado;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &v1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%d", &v2);
    
    resultado = v1 - v2;
    
    printf("A diferen�a entre %d e %d � %d", v1, v2, resultado);
    
    return 0;
}

