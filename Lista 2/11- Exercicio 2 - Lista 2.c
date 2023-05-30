/******************************************************************************

Lucas Pellegrini Vasco
2an
*******************************************************************************/

#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, n, soma;

    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%d", &v[i]);
    }
    
    printf("Digite o valor da primeira posi��o: \n");
    scanf("%d", &x);
    while(x < 0 || x >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &x);
    }
    printf("Digite o valor da segunda posi��o: \n");
    scanf("%d", &n);
    while(n < 0 || n >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &n);
    }
    
    soma = v[x] + v[n];
    
    printf("A soma dos dois valores �: %d", soma);
}




