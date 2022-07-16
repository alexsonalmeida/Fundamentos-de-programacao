#include <stdio.h>

int fatorial(n) {
    int fat;

    for (fat = 1; n > 1; n--) {
        fat = fat * n;
    }

    return fat;
}

int main() {
    int num, res;

    printf("Digite um numero: ");
    scanf("%d", &num);

    res = fatorial(num);

    printf("O fatorial do numero digitado e %d", res);
    
    return 0;
}