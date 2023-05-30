/******************************************************************************
Lucas Pellegrini Vasco
2an
******************************************************************************/

#include <stdio.h>

float area(float raio) {
    return 3.14159 * raio * raio;
}

int main() {
    float raio, area;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = area(raio);
    
    printf("A area do circulo de raio %.2f � %.2f", raio, area);
    
    return 0;
}

