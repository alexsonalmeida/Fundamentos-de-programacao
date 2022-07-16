#include <stdio.h>

int main(){
    float c, i, j, t, m;
    // c = capital, i= taxa %, j= juros, = t= tempo e m= montante
    printf("Digite o valor inicial da prestacao: ");
    scanf("%f", &c);

    printf("Digite a taxa de juros: ");
    scanf("%f", &i);

    printf("Digite o periodo de tempo: ");
    scanf("%f", &t);

    j = c * i / 100 * t;
    m = c + j;
    
    printf("O valor da prestacao atrasada e de: R$%f \n", c);
    printf("O tempo de atraso foi  de: %f (unidade de tempo)\n", t);
    printf("Os juros cobrados sao de: R$%f \n", j);
    printf("O valor total a pagar e: R$%f \n", m);
}