#include <stdio.h>

int main(){
    float real, cotacao, dolar;

    printf("Digite a quantidade de dolares que voce quer converter: ");
    scanf("%f", &dolar);

    printf("Digite a cotacao atual do dolar: ");
    scanf("%f", &cotacao);

    real = dolar * cotacao;
    
    printf("US$%f equivale, hoje, a R$%f ", dolar, real);
}