/******************************************************************************
Lucas Pellegrini Vasco
2an
*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont, qtdNegativo = 0;
    float vetor[10],somaPositivo = 0;
    
        printf("Digite 10 numeros Reais : \n");
        
            for(cont = 0; cont < 10;  cont++){
                scanf("%f", &vetor[cont]);
                
                if(vetor[cont] < 0 ){
                    qtdNegativo++;
                }
                
                if(vetor[cont] > 0 ){
                    somaPositivo += vetor[cont];
                }
                
            
            }

            printf("Quantidade negativos: %d\nSoma dos positvos: %.2f",qtdNegativo,somaPositivo);

    return 0;
}




