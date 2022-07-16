#include <stdio.h>

int main(){
    float num1, num2, num3, med;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    med = (num1 + num2 + num3)/3;
    
    printf("A media aritmetica entre os numeros digitados e %f", med);
}