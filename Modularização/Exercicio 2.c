/******************************************************************************
Lucas Pellegrini Vasco
2an 
******************************************************************************/

float divisao(int v1, int v2) {
	
    if (v2 == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    } else {
        return (float) v1 / v2;
    }
}

int main() {
    int v1, v2;
    float resultado;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &v1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%d", &v2);
    
    resultado = divisao(v1, v2);
    
    printf("A divisao entre %d e %d � %f", v1, v2, resultado);
    
    return 0;
}

