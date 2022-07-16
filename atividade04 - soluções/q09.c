#include <stdio.h>

float calculadora(float n1, float n2, char sinal) {
    float resultado;

    switch (sinal) {
        case '+':
        resultado = n1 + n2;
        break;

        case '-':
        resultado = n1 - n2;
        break;

        case '*':
        resultado = n1 * n2;
        break;

        case '/':
        resultado = n1 / n2;
        break;

        default:
        printf("Operador invalido \n");
        break;
    }

    return resultado;
}

int main() {
    float num1, num2, res;
    char simbolo;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o simbolo da operacao: ");
    scanf(" %c", &simbolo);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    res = calculadora(num1, num2, simbolo);

    printf("O resultado da operacao e %f", res);

    return 0;
}