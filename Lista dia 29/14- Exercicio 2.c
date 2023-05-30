/*******************************************************************************

Lucas Pellegrini Vasco
2an
*******************************************************************************/

#include <stdio.h>

int verificaValor(int, int, int);

int main(){
	
	int x, max, min;

	printf("Insira o valor:");
	scanf("%d", &x);
	printf("Insira o valor maximo do intervalo: ");
	scanf("%d", &max);
	printf("Insira o valor do minimo do interalo: ");
	scanf("%d", &min);
	
	if(verificaIntervalo(max, min, x))
		printf("\nO valor %d esta dentro do intervalo entre %d ate %d\n", x, min, max);
	else
		printf("\nO valor %d esta fora do intervalo entre %d ate %d\n", x, min, max);
	
	return 0;
}

int verificaValor(int max, int min, int x){
	if(x>min && x<max)
		return 1;
	else
		return 0;
}

