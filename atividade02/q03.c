#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2 ){
        printf("O maximo valor digitado e %d", num1);
    } else {
        printf("O maximo valor digitado e %d", num2);
    }
}