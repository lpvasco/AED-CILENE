/******************************************************************************

Lucas Pellegrini Vasco
2AN


*******************************************************************************/

#include <stdio.h>

int main()
{
    int total, nulo, branco, valido;
    printf("Digite o numero total de votos: \n");
    scanf("%d", &total);
    printf("Digite o numero de votos nulos: \n");
    scanf("%d", &nulo);
    printf("Digite o numero de votos brancos: \n");
    scanf("%d", &branco);
    printf("Digite o numero de votos validos: \n");
    scanf("%d", &valido);
    
    valido = total - nulo - branco;
    
    printf("Percentual de Nulos = %.1f\n", nulo * 1.0 / total * 100);
    printf("Percentual de Brancos = %.1f\n", branco * 1.0 / total * 100);
    printf("Percentual de Validos = %.1f\n", valido * 1.0 / total * 100);

}
