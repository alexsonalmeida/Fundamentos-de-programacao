#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 % num2 != 0){
        printf("%d nao e divisivel por %d", num1, num2);
    } else {
        printf("%d e divisivel por %d", num1, num2);
    }
}