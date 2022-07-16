#include <stdio.h>

int pot(a, b) {
    int pot, c;

    pot = a;

    for (c = 1; c < b; c++) {
        pot *= a;
    }

    if (b == 0) {
        pot = 1;
    }

    return pot;
}

int main() {
    int num1, num2, res;
    
    printf("Digite a base: ");
    scanf("%d", &num1);

    printf("Digite o expoente: ");
    scanf("%d", &num2);

    res = pot(num1, num2);
    
    printf("O resultado da potencia e %d", res);

    return 0;
}