#include <stdio.h>

int mdc(n1, n2) {
    int resto;

    while (n2 != 0) {
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }

    return n1;
}

int main() {
    int num1, num2, res;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    res = mdc(num1, num2);

    printf("O mdc entre os valores digitados e %d", res);

    return 0;
}