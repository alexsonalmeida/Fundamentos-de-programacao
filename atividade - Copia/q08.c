#include <stdio.h>

int main(){
    int num1, num2, res;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite outro valor: ");
    scanf("%d", &num2);

    res = num1 - num2;
    
    printf("O resultado da subtracao e %d", res);
}