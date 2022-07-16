#include <stdio.h>

int main(){
    float num1, num2, adi, sub, mul, div;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    adi = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    
    printf("O resultado da adicao e %f \n", adi);
    printf("O resultado da subtracao e %f \n", sub);
    printf("O resultado da multiplicao e %f \n", mul);
    printf("O resultado da divisao e %f \n", div);
}