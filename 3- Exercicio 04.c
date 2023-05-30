/******************************************************************************

Lucas Pellegrini Vasco
2an

*******************************************************************************/
#include <stdio.h>

int main()
{
    int maca;
    float vMaca, valorTotal;
    
    printf("Digite o total de macas compradas: \n");
    scanf("%d", &maca);
    
    if(maca < 12)
        vMaca = 1.30;
    else vMaca = 1.00;
    
    valorTotal = vMaca * maca;
    printf("O valor das macas e: %.2f", valorTotal);

    return 0;
}

