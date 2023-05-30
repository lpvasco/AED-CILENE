/******************************************************************************
Lucas Pellegrini Vasco
2an
******************************************************************************/
#include <stdio.h>

int alfabeto(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    if (alfabeto(letra)) {
        printf("O caractere '%c' est� entre 'a' e 'z'\n", letra);
    } else {
        printf("O caractere '%c' n�o est� entre 'a' e 'z'\n", letra);
    }
    return 0;
}

