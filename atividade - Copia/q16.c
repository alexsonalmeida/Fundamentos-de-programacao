#include <stdio.h>

int main(){
    float sal_atual, reajuste, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &sal_atual);

    printf("Digite o valor do reajuste: ");
    scanf("%f", &reajuste);

    novo_salario = sal_atual + sal_atual * reajuste / 100;
    
    printf("O valor do novo salario sera de R$%f", novo_salario);
}