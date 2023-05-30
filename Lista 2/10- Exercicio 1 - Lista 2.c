/******************************************************************************

Lucas Pellegrini Vasco
2an
*******************************************************************************/
#include <stdio.h>
#define TAM 10

void main()
{
    float v[TAM], vQuad[TAM];
    
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%f", &v[i]);
    }
    
    for (int i=0; i<TAM;i++){
        vQuad[i] = (v[i] * v[i]);
        printf("valor de v[%d]: %.1f e o seu quadrado �: %.1f\n", i, v[i], vQuad[i]);
    }
}



