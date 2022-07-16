#include <stdio.h>

int main(){
    float valor_prod, valorpercent_desc, valor_desc, valor_final;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_prod);

    printf("Digite o valor percentual do desconto: ");
    scanf("%f", &valorpercent_desc);

    valor_desc = valor_prod * valorpercent_desc/100;
    valor_final = valor_prod - valor_desc;
    
    printf("O desconto sera de R$%f e o valor final do produto sera de R$%f", valor_desc, valor_final);
}