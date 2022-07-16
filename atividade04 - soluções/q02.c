#include <stdio.h>

int verificador(n) {
    int valor, resto, div;

    div = 0;

    for (valor = 1; valor <= n; valor++) {
        resto = n % valor;

        if (resto == 0) {
            div++;
        }
    }
    
    if (div == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, retorno;

    printf("Digite um numero: ");
    scanf("%d", &num);

    retorno = verificador(num);

    if (retorno == 1) {
        printf("O numero digitado e primo");
    } else {
        printf("O numero digitado nao e primo");
    }

    return 0;
}