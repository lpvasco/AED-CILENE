/******************************************************************************

Lucas Pellegrini Vasco
2an
*******************************************************************************/
#include <stdio.h>

int primo (int x) {

  int retorno = 1;

  for (int i=2; i<= x/2; i++)
    if (x%i==0) retorno = 0;
    
  return retorno;
  
}
int somaPrimo (int n) {
    int soma=0, aux=2;
    while (n>0) {
        if (primo (aux)) {
            soma=soma+aux;n--; 
            printf ("\nPrimo=%d", aux);
        }
        aux++;
    }

    return soma;
}

int main(){
    int n, soma;

    printf("Quantos primos quer somar ? ");
    scanf ("%d", &n);

    soma = somaPrimo (n);

    printf ("\nSoma=%d", soma);
    return 0;
}


