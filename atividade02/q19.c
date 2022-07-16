#include <stdio.h>

int main(){
    int qntpecas;
    float salario;

    printf("Digite a quantidade de pecas que o funcionario produziu: ");
    scanf("%d", &qntpecas);

    if(qntpecas <= 500){
        salario = 440;

        printf("O salario do funcionario sera R$%f", salario);
    } else if(qntpecas > 500 && qntpecas <= 750){
        salario = 440 + ((qntpecas - 500) * 0.50);

        printf("O salario do funcionario sera R$%f", salario);
    } else {
        salario = 550 + ((qntpecas - 750) * 0.75);

        printf("O salario do funcionario sera R$%f", salario);
    }
}
