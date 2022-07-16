#include <stdio.h>

int main(){
    int tipocliente;
    float consumo, valor;

    printf("Digite a quantidade de metros cubicos consumidos: ");
    scanf("%f", &consumo);

    printf("Digite o tipo de cliente( digite 1 para residencial, 2 para comercial ou 3 para industrial): ");
    scanf("%d", &tipocliente);

    if(tipocliente == 1){
        valor = 5 + (consumo * 0.05);

        printf("O valor que o cliente deve pagar e R$%f", valor);
    } else if(tipocliente == 2){
        valor = 500;

        if(consumo > 80){
            valor = 500 + (consumo - 80) * 0.03;
        }
        printf("O valor que o cliente deve pagar e R$%f", valor);
    } else {
        valor = 800;

        if(consumo > 100){
            valor += (consumo - 100) * 0.04;
        }
        printf("O valor que o cliente deve pagar e R$%f", valor);
    }

}