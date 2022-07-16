#include <stdio.h>

int main(){
    float base, altura, perimetro, area;

    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = base * 2 + altura * 2;
    area = base * altura;
    
    printf("O perimetro do retangulo e %f \n", perimetro);
    printf("A area do retangulo e %f", area);
}