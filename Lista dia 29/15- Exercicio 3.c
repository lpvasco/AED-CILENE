/*******************************************************************************
Lucas Pellegrini Vasco
2an
*******************************************************************************/

#include <stdio.h>

int posicMaior(int, int, int);

int main(){
	
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	printf("O maior numero esta na posicao %d", posicMaior(a, b, c));

	return 0;
}

int posicMaior(int a, int b, int c){
	if(a>b && a>c)
		return 1;
	else if(b>a && b>c)
		return 2;
	else
		return 3;
}


