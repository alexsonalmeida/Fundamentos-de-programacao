#include <stdio.h>

int main(){
    int num, soma, div;

    soma = 0;
    div = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(div < num){
        
        if(num % div == 0){
            soma += div;
        }

        div++;
    }

    if(soma == num){
        printf("O numero digitado e perfeito");
    } else {
        printf("O numero digitado nao e perfeito");
    }
}