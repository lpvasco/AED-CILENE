/******************************************************************************

Lucas Pellegrini Vasco
2an

******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], maior, posic;

    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for (int i=0; i<TAM; i++) {     
        
        if (v[i]>maior){
            maior = v[i];
            posic = i;
        }

    }
    
    printf("\nO maior elemento � %d e est� na posi��o %d", maior, posic);

    return 0;
}

