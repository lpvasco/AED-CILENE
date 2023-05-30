/******************************************************************************

Lucas Pellegrini Vasco
2an

*******************************************************************************/
#include <stdio.h>

int main(){

    int valores[10], i , par = 0;
    
    printf ("Digite 10 valores inteiros : \n") ;
        for (i =0 ; i < 10 ; i++){
            scanf ("%d", &valores[i]);
        }
    
    for (i = 0; i < 10; i++){
        if (valores [i] % 2 == 0){
            par++;
        }
    }
    
    printf ("\nExistem: %d numeros pares", par);
 
    return 0;
}


