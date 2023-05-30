/******************************************************************************
Lucas Pellegrini Vasco
2an
*******************************************************************************/

#include <stdio.h>

int muda(int);
int troca();


int main(){
	int n=5;
	printf ("\nn = %d antes da chamada de muda", n);
	n = muda (n);
	printf ("\nn = %d depois da chamada de muda", n);
	printf("\n\n\n");
	n=5;
	printf ("\nn = %d antes da chamada de troca", n);
	troca();
	printf ("\nn = %d depois da chamada de troca", n);
	return 0;
}

int muda(int n){
	n = 10;
	printf("\nn = %d dentro da funcao muda", n);
	return n;
}

int troca(){
	int n = 10;
	printf("\nn = %d dentro da funcao troca", n);
}



