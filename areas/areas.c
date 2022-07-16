#include <stdio.h>

int main(){
    float area;
    float altura;
    float base;

    printf("Digite o valor da base:");
    scanf("%f", &base);
    printf("Digite o valor da altura:");
    scanf("%f", &altura);

    area = base * altura;
    printf("A area da figura e %f", area);
}