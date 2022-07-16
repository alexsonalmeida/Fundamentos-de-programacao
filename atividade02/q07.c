#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > 50 && num1 < 200 && num2 >= 0 && num2 < 9 ){
        printf("1");
    } else {
        printf("0");
    }
}