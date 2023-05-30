/******************************************************************************

Lucas Pellegrini Vasco
2an
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, n;
    char resposta, A, B, C;
    
    scanf("%d%d", &x, &y);
    n = (x*y) + 5;
    
    if(n <= 0)
        printf("n, A");
    else
        if (n <= 100)
            printf("n, B");
        else printf("n, C");
}


