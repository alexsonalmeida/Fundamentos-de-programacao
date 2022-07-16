#include <stdio.h>

int main(){
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Os numeros digitados foram %f e %f", num1, num2);
}