/*******************************************************************************

Lucas Pellegrini Vasco
2an
*******************************************************************************/
#include <stdio.h>

int main()
{
    float salFixo, valorvenda, comissao, salariofn;
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salFixo);
    
    printf("Digite o valor das vendas efetuadas pelo funcionario: \n");
    scanf("%f", &valorvenda);
    
    if(valorvenda <= 1500)
        comissao = 0.03;
    else comissao = 0.05;
    
    salariofn = salFixo + comissao * salFixo;
    
    printf("O salario final do vendedor e de: R$%.2f", salariofn);
    
    return 0;
}


