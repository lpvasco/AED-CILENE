/******************************************************************************

Lucas Pellegrini Vasco
2an
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {

    int i, opc, vetor[6];

    for(i = 0; i < 6; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
            for(i = 5; i >= 0; i--){
                printf("%d", vetor[i]);
            }

    return 0;
            
}


