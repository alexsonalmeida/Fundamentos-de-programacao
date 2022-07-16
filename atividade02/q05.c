#include <stdio.h>

int main(){
    int num1, num2, res;

    printf("digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        res = num1 % num2;

        if (res == 0) {
            printf("A operacao nao possui resto");
        } else {
            printf("O resto da divisao de %d por %d e %d", num1, num2, res);
        }

    } else {
        res = num2 % num1;

        if (res == 0){
            printf("A operacao nao possui resto");
        } else {
            printf("O resto da divisao de %d por %d e: %d", num2, num1, res);
        }
        
    }
}